
#  /workspace/xulun/github/ros2

cd /workspace/xulun/github/ros2
python3 ./update.py

$JAVA_HOME/bin/java -Djava.util.logging.config.file=/workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/etc/logging.properties -jar /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/opengrok.jar -c /workspace/xulun/github/ctags/ctags -s /workspace/xulun/github/ros2 -d /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/data_ros2 -H -P -S -G -W /workspace/xulun/opengrok/etc/ros2/configuration.xml -v

opengrok-deploy -c /workspace/xulun/opengrok/etc/ros2/configuration.xml /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/source.war /root/apache-tomcat-9.0.30/webapps/ros2.war

# /workspace/xulun/github/ai

$JAVA_HOME/bin/java -Djava.util.logging.config.file=/workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/etc/logging.properties -jar /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/opengrok.jar -c /workspace/xulun/github/ctags/ctags -s /workspace/xulun/github/ai -d /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/data_ai -H -P -S -G -W /workspace/xulun/opengrok/etc/ai/configuration.xml -v

opengrok-deploy -c /workspace/xulun/opengrok/etc/ai/configuration.xml /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/source.war /root/apache-tomcat-9.0.30/webapps/ai.war

# /workspace/xulun/os/seL4

cd /workspace/xulun/os/seL4/isabelle/
git pull
cd /workspace/xulun/os/seL4/l4v/
git pull
cd /workspace/xulun/os/seL4/sel4test
./repo sync
$JAVA_HOME/bin/java -Djava.util.logging.config.file=/workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/etc/logging.properties -jar /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/opengrok.jar -c /workspace/xulun/github/ctags/ctags -s /workspace/xulun/os/seL4 -d /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/data_sel4 -H -P -S -G -W /workspace/xulun/opengrok/etc/seL4/configuration.xml -T 64 -v
opengrok-deploy -c /workspace/xulun/opengrok/etc/seL4/configuration.xml /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/source.war /root/apache-tomcat-9.0.30/webapps/seL4.war

# /workspace/xulun/kernel/linux
cd /workspace/xulun/kernel/linux
git pull

$JAVA_HOME/bin/java -Djava.util.logging.config.file=/workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/etc/logging.properties -jar /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/opengrok.jar -c /workspace/xulun/github/ctags/ctags -s /workspace/xulun/kernel/linux -d /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/data_kernel -H -P -S -G -W /workspace/xulun/opengrok/etc/kernel/configuration.xml -T 64 -v
opengrok-deploy -c /workspace/xulun/opengrok/etc/kernel/configuration.xml /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/source.war /root/apache-tomcat-9.0.30/webapps/linux.war

# /workspace/xulun/github/lang

$JAVA_HOME/bin/java -Djava.util.logging.config.file=/workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/etc/logging.properties -jar /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/opengrok.jar -c /workspace/xulun/github/ctags/ctags -s /workspace/xulun/github/lang -d /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/data_lang -H -P -S -G -W /workspace/xulun/opengrok/etc/lang/configuration.xml -T 64 -v
opengrok-deploy -c /workspace/xulun/opengrok/etc/lang/configuration.xml /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/source.war /root/apache-tomcat-9.0.30/webapps/lang.war


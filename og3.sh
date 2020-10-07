#  /workspace/xulun/github/ros2

$JAVA_HOME/bin/java -Djava.util.logging.config.file=/workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/etc/logging.properties -jar /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/opengrok.jar -c /workspace/xulun/github/ctags/ctags -s /workspace/xulun/github/ros2 -d /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/data_ros2 -H -P -S -G -W /workspace/xulun/opengrok/etc/ros2/configuration.xml -v

opengrok-deploy -c /workspace/xulun/opengrok/etc/ros2/configuration.xml /workspace/xulun/gitlab/opengrok/distribution/target/opengrok-1.3.6/lib/source.war /root/apache-tomcat-9.0.30/webapps/ros2.war

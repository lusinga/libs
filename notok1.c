//
// Created by lusinga on 2020/10/26.
//

#include "klee/klee.h"

char check(char a, char b){
    if(a>0 && b>0){
        if(a+b<-10){
            return -2;
        }else{
            return 1;
        }
    }else if(a==0){
        return 0;
    }else{
        return -1;
    }
}

int main(void){
    char a,b;
    klee_make_symbolic(&a,sizeof(a),"a");
    klee_make_symbolic(&b,sizeof(b),"b");
    return check(a,b);
}
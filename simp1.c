//
// Created by lusinga on 2020/10/26.
//

#include "klee/klee.h"

int sign2(int a){
    if(a>0){
        return 1;
    }else if(a==0){
        return 0;
    }else{
        return -1;
    }
}

int main(void){
    int a;
    klee_make_symbolic(&a,sizeof(a),"a");
    return sign2(a);
}
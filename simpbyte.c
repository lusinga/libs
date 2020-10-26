//
// Created by lusinga on 2020/10/26.
//

#include "klee/klee.h"

char sign2(char a){
    if(a>0){
        return 1;
    }else if(a==0){
        return 0;
    }else{
        return -1;
    }
}

int main(void){
    char a;
    klee_make_symbolic(&a,sizeof(a),"a");
    return sign2(a);
}

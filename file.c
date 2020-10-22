//
// Created by lusinga on 2020/10/22.
//

#include <stdio.h>
#include "klee/klee.h"

int fileo(int n){
    FILE* fp = fopen("data.dat","r+");
    if(fp!=NULL){
        if(n>10){
            return -1;
        }
        char data[10];
        int nCount = fread(fp,data);
        fclose(fp);
        return nCount;
    }else{
        return -2;
    }
}

int main(){
    //printf("fib %d=%d\n",4, fib(4));
    int a;
    klee_make_symbolic(&a,sizeof(a),"a");
    return(fileo(a));
}
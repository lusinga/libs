//#include <stdio.h>
#include "klee/klee.h"

int fib(int n){
    if(n<0){
        return 0;
    }else if(n<=2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    //printf("fib %d=%d\n",4, fib(4));
    int a;
    klee_make_symbolic(&a,sizeof(a),"a");
    return(fib(a));
}
#include "klee/klee.h"
#include <stdio.h>
#include <math.h>

int sqrt2(int n){
    if(n<0){
        return 0;
    }else{
        return sqrt(n);
    }
}

int main(){
    //printf("fib %d=%d\n",4, fib(4));
    int a;
    klee_make_symbolic(&a,sizeof(a),"a");
    return(sqrt2(a));
}
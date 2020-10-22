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

int sqrt3(float n){
    if(n<0.0){
        return 0;
    }else if(sqrt(n)<100){
        return (int)sqrt(n);
    }else{
        return 100;
    }
}

int main(){
    //printf("fib %d=%d\n",4, fib(4));
    int a;
    klee_make_symbolic(&a,sizeof(a),"a");
    float f;
    klee_make_symbolic(&f,sizeof(f),"f");
    sqrt3(f);
    return(sqrt2(a));
}
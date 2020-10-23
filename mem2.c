#include <stdlib.h>
#include "klee/klee.h"

int mem(int n){
    if(n<=0){
        return -1;
    }else if(n>65536){
        return -2;
    }
    char * pMem = (char*) malloc(n*sizeof(char));
    if(pMem == NULL){
        return -3;
    }else{
        pMem[0] = (char)0x55;
        free(pMem);
        pMem = NULL;
        return n;
    }
}

int main(){
    int a;
    klee_make_symbolic(&a,sizeof(a),"a");
    return(mem(a));
}
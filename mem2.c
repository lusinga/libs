#include <stdlib.h>

int mem(int n){
    if(n<=0){
        return -1;
    }
    char * pMem = (char*) malloc(n*sizeof(char));
    if(pMem == NULL){
        return -2;
    }else{
        pMem[0] = '0x55';
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
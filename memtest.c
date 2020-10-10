#include "klee/klee.h"
#include <stdlib.h>

int test(int n){
    if(n<=0){
        return -1;
    }else{
        char *pMem = (char*)malloc(sizeof(char));
        if(pMem==NULL){
            return -2;
        }else{
            free(pMem);
            pMem = NULL;
            return 0;
        }
    }
}

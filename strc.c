#include "klee/klee.h"

int check_pass(char* a){
    if(a==NULL){
        return -1;
    }else if(a[0]=='\0'){
        return -2;
    }else{
        if(a[0]=='C' && a[1]=='+' && a[2]=='+'){
            return 1;
        }else{
            return 0;
        }
    }
}

#define LEN 3

int main()
{
    char secret[LEN];
    klee_make_symbolic(&secret, LEN, "secret");
    return (check_pass(secret));
}
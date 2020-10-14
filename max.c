#include "klee/klee.h"

int max2(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a,b;
    klee_make_symbolic(&a, sizeof(a), "a");
    klee_make_symbolic(&b, sizeof(b), "b");
    return (max2(a,b));
}
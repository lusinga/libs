#include "klee/klee.h"

int gcd(int a, int b){
    int a0 = a;
    int b0 = b;
    int c0 = 0;
    if(a<=0 || b<=0){
        return 0;
    }
    
    if(a<b){
        a0 = b;
        b0 = a;
    }
    
    for(;;){
        c0 = a0 % b0;
        if(c0==0){
            return b0;
        }else{
            a0 = b0;
            b0 = c0;
        }
    }
    
    return 1;
}

int main()
{
    int a,b;
    klee_make_symbolic(&a, sizeof(a), "a");
    klee_make_symbolic(&b, sizeof(b), "b");
    return (gcd(a,b));
}
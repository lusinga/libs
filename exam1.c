//
// Created by lusinga on 2020/10/26.
//

#include "klee/klee.h"

signed char test(signed char x, signed char y) {
    signed char z = 0;
    if (x > 0) {
        x += 10;
        z = x / 5;
    } else {
        z = x / 5 + 2;
        x += 10;
    }
    z += y;
    return z;
}

int main(void) {
    char a, b;
    klee_make_symbolic(&a, sizeof(a), "a");
    klee_make_symbolic(&b, sizeof(b), "b");
    return test(a, b);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    return 0;
}

struct S {
    int x;
};

void f(struct S s);

void test() {
    struct S s;
    f(s); // warn: passed-by-value arg contain uninitialized data
}

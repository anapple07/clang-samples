#include <stdio.h>
#include <stdlib.h>

void test() {
    void *p = alloca(0); // warn: allocation size of 0 bytes
}

int main() {
    test();
}

#include <stdio.h>
#include <stdlib.h>

void test() {
    void *p = calloc(0, 42); // warn: allocation size of 0 bytes
}

int main() {
    test();
}

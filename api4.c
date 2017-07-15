#include <stdio.h>
#include <stdlib.h>

void test() {
    void *p = malloc(1);
    p = realloc(p, 0); // warn: allocation size of 0 bytes
}

int main() {
    test();
}

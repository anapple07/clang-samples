#include <stdio.h>
#include <stdlib.h>

void test() {
    void *p = valloc(0); // warn: allocation size of 0 bytes
}

int main() {
    test();
}

#include <stdio.h>
#include <stdlib.h>

void test() {
    void *p = malloc(0);
}

int main() {
    test();
}

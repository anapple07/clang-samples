#include <stdio.h>
#include <stdlib.h>

void test() {
    int *p = malloc(1);
    free(p);
    free(p); // warn: attempt to free released memory
}

int main() {
    test();
}

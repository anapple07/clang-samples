#include <stdio.h>
#include <stdlib.h>

void test() {
    int *p = malloc(sizeof(int));
    free(p);
    *p = 1; // warn: use after free
}

int main() {
    test();
}

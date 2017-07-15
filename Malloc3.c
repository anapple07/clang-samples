#include <stdio.h>
#include <stdlib.h>

void test() {
    int *p = malloc(1);
    if (p)
    return; // warn: memory is never released
}

int main() {
    test();
}

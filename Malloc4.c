#include <stdio.h>
#include <stdlib.h>

void test() {
    int a[] = { 1 };
    free(a); // warn: argument is not allocated by malloc)
}

int main() {
    test();
}

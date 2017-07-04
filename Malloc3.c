#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[] = { 1 };
    free(a); // warn: argument is not allocated by malloc
}

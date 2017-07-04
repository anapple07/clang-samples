#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    free(p);
    *p = 1; // warn: use after free
}

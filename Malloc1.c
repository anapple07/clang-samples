#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(1);
    free(p);
    free(p); // warn: attempt to free released memory
    return 0;
}

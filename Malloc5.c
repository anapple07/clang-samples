#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(1);
    if (p)
    return 0; // warn: memory is never released
}

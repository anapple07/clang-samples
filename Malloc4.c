#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(char));
    p = p - 1;
    free(p); // warn: argument to free() is offset by -4 bytes
}

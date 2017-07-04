#include <stdio.h>
#include <stdlib.h>

int main() {
    char x[4];
    char *y = "abcd";

    strcpy(x, y); // warn)
}

#include <stdio.h>
#include <stdlib.h>

void test() {
    char x[4];
    char *y = "abcd";

    strcpy(x, y); // warn
}

int main() {
    test();
}

#include <stdio.h>
#include <stdlib.h>

void test() {
    return strlen(0); // warn
}

int main() {
    test();
}

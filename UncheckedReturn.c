#include <stdio.h>
#include <stdlib.h>

void test() {
    setuid(1); // warn
}

int main() {
    test();
}

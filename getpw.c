#include <stdio.h>
#include <stdlib.h>

void test() {
    char buff[1024];
    getpw(2, buff); // warn
}

int main() {
    test();
}

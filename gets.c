#include <stdio.h>
#include <stdlib.h>

void test() {
    char buff[1024];
    gets(buff); // warn
}

int main() {
    test();
}

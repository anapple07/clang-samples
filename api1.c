#include <stdio.h>
#include <stdlib.h>

void f();

void test() {
    pthread_once_t pred = {0x30B1BCBA, {0}};
    pthread_once(&pred, f);
}

int main() {
    test();
}

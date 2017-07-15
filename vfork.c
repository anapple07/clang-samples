#include <stdio.h>
#include <stdlib.h>

int test() {
    vfork();
}

int main() {
    test();
}

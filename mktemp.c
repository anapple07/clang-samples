#include <stdio.h>
#include <stdlib.h>

int test() {
    char *x = mktemp("/tmp/zxcv"); // warn: insecure, use mkstemp
}

int main() {
    test();
}

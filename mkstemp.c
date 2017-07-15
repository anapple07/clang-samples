#include <stdio.h>
#include <stdlib.h>

int test() {
    mkstemp("XX"); // warn
}

int main() {
    test();
}

#include <stdio.h>
#include <stdlib.h>

void* test() {
   return __builtin_alloca(12); // warn
}

int main() {
    test();
}

#include <stdio.h>
#include <stdlib.h>

void test() {
  long *p = malloc(sizeof(short));
    // warn: result is converted to 'long *', which is
    // incompatible with operand type 'short'
  free(p);
}

int main() {
    test();
}

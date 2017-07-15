#include <stdio.h>
#include <stdlib.h>

void test() {
  char dest[3];
  strncat(dest, "***", sizeof(dest));
    // warn: potential buffer overflow
}

int main() {
    test();
}

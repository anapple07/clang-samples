#include <stdio.h>
#include <stdlib.h>

void test() {
  static int *x;
  int y;
  x = &y; // warn
}

int main() {
    test();
}

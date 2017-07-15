#include <stdio.h>
#include <stdlib.h>

void test() {
  int x;
  int y = x + 1; // warn: left operand is garbage
}

int main() {
    test();
}

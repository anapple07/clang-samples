#include <stdio.h>
#include <stdlib.h>

void test() {
  int x;
  x = 1; // warn
}

int main() {
    test();
}

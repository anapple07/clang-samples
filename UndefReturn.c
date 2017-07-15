#include <stdio.h>
#include <stdlib.h>

int test() {
  int x;
  return x; // warn
}

int main() {
    test();
}

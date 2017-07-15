#include <stdio.h>
#include <stdlib.h>

void test() {
  int x;
  if (x) // warn
    return;
}

int main() {
    test();
}

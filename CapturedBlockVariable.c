#include <stdio.h>
#include <stdlib.h>

void test() {
  int x;
  ^{ int y = x; }(); // warn
}

int main() {
    test();
}

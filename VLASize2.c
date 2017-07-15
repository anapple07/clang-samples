#include <stdio.h>
#include <stdlib.h>

void test() {
  int x = 0;
  int vla2[x]; // warn: zero size
}

int main() {
    test();
}

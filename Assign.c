#include <stdio.h>
#include <stdlib.h>

void test() {
  int i, a[10];
  int x = a[i]; // warn: array subscript is undefined
}

int main() {
    test();
}

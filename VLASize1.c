#include <stdio.h>
#include <stdlib.h>

void test() {
  int x;
  int vla1[x]; // warn: garbage as size
}

int main() {
    test();
}

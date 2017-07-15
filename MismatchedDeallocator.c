#include <stdio.h>
#include <stdlib.h>

void test() {
  int *p = (int *)malloc(sizeof(int));
  delete p; // warn
}

int main() {
    test();
}

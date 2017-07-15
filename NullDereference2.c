#include <stdio.h>
#include <stdlib.h>

void test(int *p) {
  if (p)
      *p = 0; //warn
}

int main() {
    int a[] = {3,4,5};
    test(a);
}

#include <stdio.h>
#include <stdlib.h>

int f(int *p) __attribute__((nonnull));

void test(int *p) {
  if (!p)
    f(p); // warn
}

int main( ) {
    int a[] = {1,2,3};
    test(a);
}

#include <stdio.h>
#include <stdlib.h>


char const *p;

void test() {
  char const str[] = "string";
  p = str; // warn
}

int main() {
    test();
}

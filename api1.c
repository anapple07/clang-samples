#include <stdio.h>
#include <stdlib.h>

void test(const char *path) {
  int fd = open(path, O_CREAT);
    // warn: call to 'open' requires a third argument when the
    // 'O_CREAT' flag is set
}

int main() {
    test();
}

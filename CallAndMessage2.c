#include <stdio.h>
#include <stdlib.h>

int main() {
    void (*foo)(void);
    foo(); // warn: function pointer is uninitialized
    return 0;
}

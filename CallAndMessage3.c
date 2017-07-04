#include <stdio.h>
#include <stdlib.h>

int main() {
    void (*foo)(void);
    foo = 0;
    foo(); // warn: function pointer is null)
}

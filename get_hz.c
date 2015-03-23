#include <stdio.h>
#include <unistd.h>

int main() {
    printf("%d\n", (int)sysconf(_SC_CLK_TCK));
}

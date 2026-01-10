#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 256; i++) {
        printf("\033[38;5;%dm%3d ", i, i);
        if ((i + 1) % 16 == 0)
            printf("\n");
    }

    printf("\033[0m");
    return 0;
}

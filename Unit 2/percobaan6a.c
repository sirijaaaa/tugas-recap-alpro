#include <stdio.h>

int i = 1;

int main() {

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
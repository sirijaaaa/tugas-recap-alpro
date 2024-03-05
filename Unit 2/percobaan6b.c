#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}
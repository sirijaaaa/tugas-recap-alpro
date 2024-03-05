#include <stdio.h>

int angka;

int main() {
    
    printf("Masukan angka: \n");
    scanf("%d", &angka);

    if (angka > 0) {
        printf("Kamu baru saja memasukan bilangan positif.\n");
    } else if (angka < 0) {
        printf("Kamu baru saja memasukan bilangan negatif.\n");
    } else {
        printf("Kamu baru saja memasukan nol.\n");
    }

    return 0;
}
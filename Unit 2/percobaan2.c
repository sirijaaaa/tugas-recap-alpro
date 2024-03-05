#include <stdio.h>

int main() {
    int angka;

    printf("Masukan angka: \n");
    scanf("%d", &angka);

    (angka > 0) ? printf("Kamu baru saja memasukan bilangan positif.\n") : (angka < 0) ? printf("Kamu baru saja memasukan bilangan negatif.\n") : printf("Kamu baru saja memasukan nol.\n");

    return 0;
}

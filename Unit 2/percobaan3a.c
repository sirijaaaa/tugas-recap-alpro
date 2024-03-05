#include <stdio.h>

int main() {
    int nilai;
    char indeks;

    printf("Masukan nilai responsi strukdat kamu: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        indeks = 'A';
    } else if (nilai >= 70) {
        indeks = 'B';
    } else if (nilai >= 60) {
        indeks = 'C';
    } else if (nilai >= 50) {
        indeks = 'D';
    } else {
        indeks = 'F';
    }

    printf("Indeks nilai kamu adalah: %c\n", indeks);

    return 0;
}
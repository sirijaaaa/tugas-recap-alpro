#include <stdio.h>

int main() {
    int nilai;
    char indeks;

    printf("Masukan nilai responsi strukdat kamu: ");
    scanf("%d", &nilai);

    switch (nilai) {
        case 80 ... 100:
            indeks = 'A';
            break;
        case 70 ... 79:
            indeks = 'B';
            break;
        case 60 ... 69:
            indeks = 'C';
            break;
        case 50 ... 59:
            indeks = 'D';
            break;
        default:
            indeks = 'F';
            break;
    }

    printf("Indeks nilai kamu adalah: %c\n", indeks);

    return 0;
}
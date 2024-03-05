#include <stdio.h>

void intro(char name[], int age) {
  printf("Halo! Perkenalkan nama saya %s. Usia saya %d tahun.\n", name, age);
}

int main() {
  intro("Roma", 12);
  intro("Romi", 30);
  intro("Romo", 75);
  return 0;
}
#include<stdio.h>

int kelilingpersegi(int sisi){
    int keliling=sisi*4;
    printf("%i\n", keliling);

}

int luaspersegi(int sisi){
    int luas=sisi*sisi;
    printf("%i\n", luas);
}

int volumkubus(int sisi){
    int volum=sisi*sisi*sisi;
    printf("%i", volum);
}

int main(){
    int sisi;
    scanf("%i", &sisi);
    kelilingpersegi(sisi);
    luaspersegi(sisi);
    volumkubus(sisi);
    
}
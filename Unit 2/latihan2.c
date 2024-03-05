#include<stdio.h>

int main(){
    int i,j,uang;
    int total=0;
    scanf("%i", &j);
    if(j>0){
    for(int u=1;u<=j;u++){
        scanf("%i", &uang);
        total+=uang;
        uang=0;
    }
    printf("total = %i", total);
    } else {printf("tidak ada transaksi hari ini"); }
}
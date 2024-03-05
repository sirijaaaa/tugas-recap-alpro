#include<stdio.h>

int main(){
    int j,i;
    int total=0;
    scanf("%d", &j);
    int jumlah[j];
    for(i=0;i<j;i++){
        scanf("%d", &jumlah[i]);
    }
    for(i=0;i<j;i++){
        
        total += jumlah[i];
    }
    printf("%d", total);


}
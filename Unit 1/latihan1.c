#include<stdio.h>

int main(){
    float va, vb, vc, sa, sb, sc, ta, tb, tc;

    scanf("%f", &sa);
    scanf("%f", &ta);
    float kecepatan= (float) sa/ta;
    scanf("%f", &vb);
    scanf("%f", &tb);
    float jarak = (float) vb*tb;
    scanf("%f", &sc);
    scanf("%f", &vc);
    float waktu = (float) sc/vc;
    printf("%.2f\n", kecepatan);
    printf("%.2f\n", jarak);
    printf("%.2f", waktu);


}
#include <stdio.h>

int a, b, c, d, e;

int main(){
    int a = b = c = d = e = 10;
    a += 5;
    printf("%d\n", a);
    b -= 5;
    printf("%d\n", b);
    c *= 5;
    printf("%d\n", c);
    d /= 5;
    printf("%d\n", d);
    e %= 5;
    printf("%d\n", e);
    return 0;
}
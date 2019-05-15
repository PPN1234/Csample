#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 4;
    int c,d,e;
    c = a + b * 5;
    d = (a + b) * 5;
    e = sizeof(a);
    a++;
    b+=a;
    printf("%d\n", a);  
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    int n = 123456789;
    int m = n%1000;
    int k = n/1000;
    int l = k*1000;
    int j = n-1;

    printf("%d\n", n);
    printf("%d\n", m);
    printf("%d\n", k);
    printf("%d\n", l);
    printf("%d\n", j);

    return 0;
}
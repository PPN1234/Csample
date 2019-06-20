#include <stdio.h>

int main(void)
{
short int n = 10;
short int n1 = n&1;
short int n2 = n|1; 
short int n3 = n>>1;
short int n4 = n<<2;

printf("変数nの下位8ビットパターンは%d\n",n);
printf("変数n1の下位8ビットパターンは%d\n",n1);
printf("変数n2の下位8ビットパターンは%d\n",n2);
printf("変数n3の下位8ビットパターンは%d\n",n3);
printf("変数n4の下位8ビットパターンは%d\n",n4);

int i=0, j=2, k=4;
int a=5, b=3;
i = k++ + ++j;
a += b;
b *= a;

printf("iの値は%d\n",i);
printf("jの値は%d\n",j);
printf("kの値は%d\n",k);
printf("aの値は%d\n",a);
printf("bの値は%d\n",b);

return 0;
}
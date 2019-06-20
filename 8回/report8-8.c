#include <stdio.h>

int main(void)
{
   int i;
   double num;
   double X = 1;
   
   printf("0<A<1を満たす数値Aを入力して下さい。\n");
   scanf("%lf", &num);
   
   // 反復計算に該当するfor文の繰り返し処理を記述
    for(i=1; i<=20; i++){
        X=(2*X)-(num*pow(X,2));
        
    }
   printf("逆数1/Aは%fです。\n", X);

   return 0;
}
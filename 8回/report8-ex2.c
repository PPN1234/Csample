#include <stdio.h>
int main(void)
{
   int num = 0;
   int sum = 0;
   do{
      printf("テストの点数を入力してください。(0で終了)\n");
      scanf("%d", &num);
      sum += num;
}while(num); // numの値が0のとき繰り返しが終了する
   printf("テストの合計点は%d点です。\n", sum);
   return 0;
}
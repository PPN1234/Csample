#include <stdio.h>
#define NUM 4

int main(void)
{
   double A[NUM], B[NUM];
   double sum = 0.0; // 内積計算に使うため0.0で初期化
   int i;
 
   printf("ベクトルAの各要素を代入して下さい。\n");

   // 配列A[]の要素をキーボードから入力して格納する記述を書く
   for(i=0; i<NUM; i++){
       scanf("%lf",&A[i]);
   }
   printf("ベクトルBの各要素を代入して下さい。\n");

// 配列B[]の要素をキーボードから入力して格納する記述を書く  
    for(i=0; i<NUM; i++){
       scanf("%lf",&B[i]);
   }
// 配列A[]と配列B[]の要素を出力して内積計算の記述を書く。
// 繰り返し処理はfor文と変数iを使う
    for(i=0; i<NUM; i++){
        sum+=A[i]*B[i];
    }
   printf("ベクトルAとBの内積は%fです。\n", sum);

   return 0;
}
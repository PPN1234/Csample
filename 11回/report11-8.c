#include <stdio.h>
#include <math.h> // math.hをインクルードする

int main(void)
{
   double PI = 3.1415926; // 円周率
   double arg, dist; // 偏角と距離
   double real, imag; // 実部と虚部

   printf("偏角を入力してください(0～180)。\n");
   // キーボードから偏角を入力し、変数argに代入
    scanf("%lf",&arg);
   printf("距離を入力してください。\n");
// キーボードから距離を入力し、変数distに代入
    scanf("%lf",&dist);
   // cos, sin関数の渡す角度をラジアン単位に変換して
   // 変数 real, imagの値を計算し、その結果を表示させる。
    real=dist*cos(arg*(PI/180));
    imag=dist*sin(arg*(PI/180));
   printf("実部は%f, 虚部は%fです。\n", real, imag);
  
   return 0;
} 
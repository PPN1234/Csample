#include <stdio.h>

int main(void){

    int weight,height;
    int Rohrer;
    double num1,num2;
   
    printf("体重[kg]と身長[cm]を入力してください。\n");
    scanf("%d",&weight);
    scanf("%d",&height);
    num1 = pow(height,3.0);
    num2 = pow(10,7.0);
    Rohrer = (weight / num1) * num2; 
    printf("ローレル指数は%dです。\n",Rohrer);

    return 0;
}
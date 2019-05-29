#include <stdio.h>

int main(void)
{
    int res;

    printf("成績を入力してください。\n");

    scanf("%d",&res);

    if(res == 1){
        printf("成績は%dです。もっとがんばりましょう。\n",res);
    }else if(res == 2){
        printf("成績は%dです。もう少しがんばりましょう。\n",res);
    }else if(res == 3){
        printf("成績は%dです。さらに上を目指しましょう。\n",res);
    }else if(res == 4){
        printf("成績は%dです。たいへんよくできました。\n",res);
    }else if(res == 5){
        printf("成績は%dです。大変優秀です。\n",res);
    }else{
        printf("成績の入力は１〜５の整数を入力してください。\n");
    }
    return 0;
    }
#include <stdio.h>

int main(void)
{
    int res;
    
    printf("成績を入力してください。\n");
    
    scanf("%d", &res);

    switch (res)
    {
    case 1:
    printf("成績は%dです。\nもっとがんばりましょう。\n",res);
    break;
    case 2:
    printf("成績は%dです。\nもう少しがんばりましょう。\n",res);
    break;
    case 3:
    printf("成績は%dです。\nさらに上をめざしましょう。\n",res);
    break;
    case 4:
    printf("成績は%dです。\nたいへんよくできました。\n",res);
    break;
    case 5:
    printf("成績は%dです。\nたいへん優秀です。\n",res);
    break;
    default:
    printf("１〜５の数値を入力してください。\n");
        break;
    }
    return 0;
}
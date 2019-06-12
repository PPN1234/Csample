#include <stdio.h>

int main(void)
{
    char lang;

    printf("A〜Cまでの文字を入力してください。\n");

    scanf("%c",&lang);

    switch (lang){
    case 'A':
    case 'B':
    case 'C':
    printf("正解です。\n");
    break;
    default:
    printf("間違いです。\n");
        break;
    }
return 0;

}
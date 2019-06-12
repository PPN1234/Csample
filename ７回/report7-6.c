#include <stdio.h>

int main(void){
    int res;

    printf("現在の月を数値で入力してください。\n");

    scanf("%d",&res);

    switch (res)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d月の日数は31日です。\n",res);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d月の日数は30日です。\n",res);
        break;
    case 2:
        printf("%d月の日数は28日です。\n",res);
        break;
    default:
        printf("入力した数値が間違っています。\n");
        break;
    }
    return 0;
}

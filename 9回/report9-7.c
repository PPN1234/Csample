#include <stdio.h>

int main(void)
{
    int month,days;

    printf("現在の月を数値で入力してください。\n");
    scanf("%d",&month);

    switch (month){
    
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    days = 30;
    break;
    case 2:
    days = 28;
        break;
    default :
    days = 0;
    break;
    }
    if (days != 0){
		printf("%d月の日数は%d日です。\n", month, days);
	}
	else {
		printf("入力した数値が間違っています。\n");
	}
    return 0;
}
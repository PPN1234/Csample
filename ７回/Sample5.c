#include <stdio.h>

int main(void)
{
    int res;

    printf("整数を入力してください。\n");

    scanf("%d",&res);

    switch(res){
        case 1:
        printf("１が入力されました。\n");
        break;
        case 2:
        printf("２が入力されました。\n");
        break;
        default:
        printf("１か２を入力してください。\n");
        break;
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int res;

    printf("整数を入力してください。\n");

    scanf("%d",&res);

    if(res == 1){
        printf("１が入力されました。\n");
    }else if(res == 2){
        printf("２が入力されました。\n");
    }
    else{
        printf("１か２を入力してください。\n");
    }
    return 0;
}
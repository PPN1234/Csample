#include <stdio.h>

int main(void)
{
    int res;
    char *ans;

printf("西暦を入力してください。\n");

scanf("%d",&res);

ans =(res%4==0 && res%100!=0 || res%4==0 && res%400==0) ? "うるう年" : "平年";

printf("%d年は%sです。\n",res,ans);

return 0;
}
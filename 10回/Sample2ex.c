#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int test[5];
    int i,j;

    printf("5人の点数を入力してください。\n");
    for(i=0; i < sizeof(test)/sizeof(int); i++){
    scanf("%d",&test[i]);
    }
    for(j=0; j<sizeof(test)/sizeof(int); j++){
        printf("%d番目の人の点数は%dです。\n",j+1,test[j]);
    }
    return 0;
}
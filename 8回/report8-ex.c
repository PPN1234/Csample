#include <stdio.h>

int main(void)
{
    int i;
    for(i=1; i<=10; i++){
        printf("%d\n",i);
        if(i%2==0){
            printf("偶数\n");
        }

    }
    return 0;
}
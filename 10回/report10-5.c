#include <stdio.h>
//練習5
int main(void){


char str[100];
int i;

printf("文字列を入力してください。\n");

scanf("%s",str);

for(i=0; str[i] != '\0'; i++){
    if(str[i] == 'a'){
        str[i] = 'b';
    }
}
printf("%sに置きかえました。\n",str);

return 0;
}

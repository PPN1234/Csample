#include <stdio.h>

void buy(void){
    printf("車を買いました。\n");
}
int main(void){
    buy();

    printf("もう１台車を購入します。\n");

    buy();

    return 0;
}
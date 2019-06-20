#include <stdio.h>
//(10)から(15)までの確認
int main(void)
{
    char moji;
    double e;
    printf("アルファベットの最初の文字はなんですか？\n");
    moji = getchar();
    printf("アルファベットの最初の文字は%cです。\n", moji);

    printf("自然対数の値はいくつですか？\n");
    scanf("%lf",&e);
    printf("自然対数の値は%fです。\n", e);
    return 0;
}


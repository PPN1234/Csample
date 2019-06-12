#include <stdio.h>
int main(void)
{
   int res = 2;
   switch(res){
      case 2:
         printf("2が入力されました。\n");
      case 1:
         printf("1が入力されました。\n");
         break;
      default:
         printf("1か2を入力してください。\n");
         break;
   }
   return 0;
}
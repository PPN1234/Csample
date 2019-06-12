#include <stdio.h>

int main(void){
int i,j,k;
scanf("%d",&i);
scanf("%d",&j);
scanf("%d",&k);
if (j*k<=0){
	printf("Case 1\n");
}else if(i<0){
	printf("Case 2\n");
}else{
	printf("Case 3\n");
}
return 0;
}
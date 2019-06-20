#include <stdio.h>

int main(void)
{

    for(int i=0; i<=3; i++){
        for(int j=1; j<=6; j+=2){
            printf("%d",i*j);
            printf(" ");
        }
        printf("\n");
    }
    int m = 0, n=0;	
for (int k=1; k<=3; k++) {
	for (int l=1; l<=2; l++) {
		m = m + 1;
		n = n + (l - k);
	}
}
printf("%dと%d\n",m,n);

}
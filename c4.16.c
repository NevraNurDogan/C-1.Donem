#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* 16. Klavyeden girilen n sayýsýna kadar 1-n arasýndaki sayýlarýn n^n deðerlerini gösteren program kodunu yazýnýz.
*/

int main(int argc, char *argv[]) {
	int i,n,a;
	printf("sayi giriniz:");
	scanf("%d",&n);
	if (n==0){
	printf("tanýmsýz");	
		}
	for (i=1;i<=n;i++){ 
	a=pow(i,i);
	printf("%d \n",a);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* 16. Klavyeden girilen n say�s�na kadar 1-n aras�ndaki say�lar�n n^n de�erlerini g�steren program kodunu yaz�n�z.
*/

int main(int argc, char *argv[]) {
	int i,n,a;
	printf("sayi giriniz:");
	scanf("%d",&n);
	if (n==0){
	printf("tan�ms�z");	
		}
	for (i=1;i<=n;i++){ 
	a=pow(i,i);
	printf("%d \n",a);
	}
	return 0;
}

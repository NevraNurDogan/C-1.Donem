#include <stdio.h>
#include <stdlib.h>

/*1. Klavyeden girilen 10 adet tam say�n�n en b�y���n� bulan program kodunu yaz�n�z.     */

int main(int argc, char *argv[]) {
	int i,sayi,max;
	for (i=0;i<=9;i++){
	printf("%d sayi giriniz:",i+1);
	scanf("%d",&sayi);
	if (i==0 ){
	max=sayi;
		}
	else {
	if (max<sayi){
		max=sayi;	
			}
		}
	}
	printf("En buyuk sayi :%d",max);
	return 0;
}

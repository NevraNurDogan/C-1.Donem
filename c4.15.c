#include <stdio.h>
#include <stdlib.h>

/* 15. Klavyeden -1 girilene kadar 2 basamakli ka� tane say� girildi�ini s�yleyen program kodunu
yaz�n�z. */

int main() {
	int sayi,sayac=0,adet=0;
	while (sayac<1){
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi==-1){
	sayac++;
	}
	else{
		if (sayi>9 && sayi<=99 ){
			adet++;} 
		}
	}
	printf("\n%d",adet);
	
	return 0;
}

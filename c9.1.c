#include <stdio.h>
#include <stdlib.h>
/*1. Verilen bir int dizi i�erisinden parametre olarak verilen eleman�n ka��nc� s�rada oldu�unu bulan
(yoksa -1 d�nd�ren) fonksiyonu yaz�n�z*/
	int i,sayac=0;
    int dizi[8]={1, 2, 5, 12, 20, 50, 4, 30};
    int bul(int aranan){
    
	for(i=0;i<8;i++){
		if(dizi[i]==aranan){
			printf("%d",i+1);
			sayac++;
		}
	}
	if(sayac==0){
		printf("-1");
		}
	return i;
}

int main(){
	int a;
	printf("Aranan sayiyi giriniz:");
	scanf("%d",&a);
    bul(a);
	
	return 0;
}

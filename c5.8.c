#include <stdio.h>
#include <stdlib.h>

/*8. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde indisleri tek olan sayýlarýn ortalamasýný bulan ve ortalamadan
büyük olan (sadece tek indisli) sayýlarý ekrana yazdýran program kodunu yazýnýz.
Not: indis 0 ile baþlar. 20 sayýsý 0. Ýndistedir. 60, 42, 24 gibi sayýlar iþleme tabi tutulmalýdýr.
*/

int main(int argc, char *argv[]) {
	int i,toplam=0,sayac=0,sayilar[14]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	float ort;
	for (i=0;i<14;i++){
	if (i%2==1){
		sayac++;
		printf("%d ,",sayilar[i]);
		toplam=toplam+sayilar[i];
		}
	}
	ort=toplam/sayac;
	printf("\nOrtalama %f",ort);
	
	for (i=0;i<14;i++){
	 if (i%2==1){
		sayac++;
		if(sayilar[i]>ort){
		printf("\n%d ",sayilar[i]);
			}
		}
	}
	
	return 0;
}

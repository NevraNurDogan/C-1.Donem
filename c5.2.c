#include <stdio.h>
#include <stdlib.h>

/* 2. Kullan�c� taraf�ndan -1 girilene kadar girilen tam say�lardan sadece pozitif say�lar� diziye
alan ve ortalamas�n� bulan program kodunu yaz�n�z. */

int main() {
	int i=0,sayi,sayac=0,sayac2=0,dizi[i];
	float ortalama,toplam=0;
	while (sayac<1){
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		if (sayi==-1){sayac++;	}
		else { 
		if (sayi>=0){
		  dizi[i]=sayi;
		  sayac2++;
		  toplam+=sayi;
	
		  }
			}
			 ortalama=toplam/sayac2;
	}
	printf("ortalama:%.2f",ortalama);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 2. Kullanıcı tarafından -1 girilene kadar girilen tam sayılardan sadece pozitif sayıları diziye
alan ve ortalamasını bulan program kodunu yazınız. */

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

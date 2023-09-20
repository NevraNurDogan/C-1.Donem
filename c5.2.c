#include <stdio.h>
#include <stdlib.h>

/* 2. Kullanýcý tarafýndan -1 girilene kadar girilen tam sayýlardan sadece pozitif sayýlarý diziye
alan ve ortalamasýný bulan program kodunu yazýnýz. */

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

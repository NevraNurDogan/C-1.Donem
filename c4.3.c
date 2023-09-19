#include <stdio.h>
#include <stdlib.h>

/* 3. Klavyeden girilen bir sayýnýn mükemmel sayý olup olmadýðýný bulan program kodunu
yazýnýz.
(Mükemmel sayý, kendisi hariç pozitif tam bölenlerinin toplamý kendisine eþit olan sayý. Örnek: 6 sayýsý 1, 2, 3’e bölünmektedir.) */

int main(int argc, char *argv[]) {
	int sayi,i,toplam=0;
	printf("Sayiyi giriniz:");
	scanf(" %d",&sayi);
	for (i=1;i<sayi;i++){
		if (sayi%i==0){
		toplam+=i;
		}
	}
	if (toplam==sayi){
		printf("Sayi mukemmel sayidir.");
	}
	else {printf("Sayi mukemmel sayi degildir.");
	}
	return 0;
}

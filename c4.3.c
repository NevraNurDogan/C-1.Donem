#include <stdio.h>
#include <stdlib.h>

/* 3. Klavyeden girilen bir say�n�n m�kemmel say� olup olmad���n� bulan program kodunu
yaz�n�z.
(M�kemmel say�, kendisi hari� pozitif tam b�lenlerinin toplam� kendisine e�it olan say�. �rnek: 6 say�s� 1, 2, 3�e b�l�nmektedir.) */

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

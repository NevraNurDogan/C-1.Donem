#include <iostream>

/* 10. Klavyeden girilen sayýnýn basamak sayýsýndaki en büyük sayýyý yazdýran program
kodunu yazýnýz. Örnek: Girilen deðer: 1253, sayý 4 basamakli olduðu için Sonuc: 9999*/

int main(int argc, char** argv) {
	int i, sayi,basamak=0;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
    while (sayi>0){
	sayi=sayi/10;
	basamak++;
	}
	printf("Girilen sayi %d basamaklidir.",basamak);
	
	for (i=0;i<basamak;i++){
		printf("9");
	}
	return 0;
}

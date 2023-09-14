#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen üç farklý tam sayýnýn toplamýný sadece 2 deðiþken kullanarak gerçekleþtiren
//C kodunu yazýnýz. Deðiþkenler: int toplam, sayý þeklinde. Baþka deðiþken kullanýlmayacaktýr. 

int main(int argc, char *argv[]) {
	int sayi,toplam=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&toplam);
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	toplam=toplam+sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	toplam=toplam+sayi;
	printf("Sonuc:%d",toplam);
	return 0;
}

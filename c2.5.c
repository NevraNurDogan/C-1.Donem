#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen �� farkl� tam say�n�n toplam�n� sadece 2 de�i�ken kullanarak ger�ekle�tiren
//C kodunu yaz�n�z. De�i�kenler: int toplam, say� �eklinde. Ba�ka de�i�ken kullan�lmayacakt�r. 

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

#include <iostream>

/* 10. Klavyeden girilen say�n�n basamak say�s�ndaki en b�y�k say�y� yazd�ran program
kodunu yaz�n�z. �rnek: Girilen de�er: 1253, say� 4 basamakli oldu�u i�in Sonuc: 9999*/

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

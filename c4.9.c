#include <stdio.h>
#include <stdlib.h>

/*9. Klavyeden girilen (n basamakl�) say�n�n basamak de�erlerini ters �eviren program kodunu yaz�n�z.
 �rnek: Girilen de�er: 1453, Sonuc: 3541; Girilen de�er: 12345, Sonu�: 54321
*/

int main(int argc, char *argv[]) {
	int sayi,tersi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin tersi:");
	while(sayi>0){
	tersi=sayi%10;
	printf("%d",tersi);
	sayi=sayi/10;
	}
	return 0;
}

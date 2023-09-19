#include <stdio.h>
#include <stdlib.h>

/*9. Klavyeden girilen (n basamaklý) sayýnýn basamak deðerlerini ters çeviren program kodunu yazýnýz.
 Örnek: Girilen deðer: 1453, Sonuc: 3541; Girilen deðer: 12345, Sonuç: 54321
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

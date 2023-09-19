#include <stdio.h>
#include <stdlib.h>

/*8. Klavyeden girilen sayýnýn kaç basamak olduðunu bulan program kodunu yazýnýz. */

int main(int argc, char *argv[]) {
	int sayi,basamak=0;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
    while (sayi>0)	{
	sayi=sayi/10;
	basamak++;
	}
	printf("Girilen sayi %d basamaklidir.",basamak);
	return 0;
}

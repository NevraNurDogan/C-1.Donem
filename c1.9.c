#include <stdio.h>
#include <stdlib.h>

/*9. Girilen sayýnýn kaç basamaklý olduðunu bulan algoritmayý tasarlayýnýz. Akýþ diyagramýný çiziniz*/

int main(int argc, char *argv[]) {
	int n,i=0;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		i++;
	}
	printf("Sayi %d basamaklidir.",i);
	return 0;
}

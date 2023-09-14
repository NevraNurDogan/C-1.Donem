#include <stdio.h>
#include <stdlib.h>

/*6. Kullanýcýndan alýnan 2 sayýnýn EKOK deðerini bulan algoritmayý tasarlayýnýz. Akýþ diyagramýný çiziniz */

int main(int argc, char *argv[]) {	
    int s1,s2;
	printf("1. sayiyi giriniz:");
	scanf("%d",&s1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&s2);
	 int ekok = 1;
    
    while (1) {
        if (ekok %s1 == 0 && ekok % s2 == 0) {
            printf("EKOK: %d\n", ekok);
            break;
        }
        ekok++;
    }
	return 0;
}



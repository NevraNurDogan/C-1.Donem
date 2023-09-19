#include <stdio.h>
#include <stdlib.h>

/* 11. Girilen 6 sayý içinden en büyük 2. Sayýyý bulan C kodunu yazýnýz. */

int main(int argc, char *argv[]) {
	int a[6];
	int i,j;
	 printf("Lutfen 6 tane sayi girin:\n");
    for (i = 0; i < 6; i++) {
        scanf("sayi :%d", &a[i]);
    }
	 // Bubble sort algoritmasý ile sayýlarý sýrala
    for (i = 0; i < 6 - 1; i++) {
        for ( j = 0; j < 6 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Sayýlarý yer deðiþtir
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // En büyük ikinci sayýyý yazdýr
    printf("En buyuk ikinci sayi: %d\n", a[4]);

	return 0;
}


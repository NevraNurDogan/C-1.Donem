#include <stdio.h>
#include <stdlib.h>

/* 11. Girilen 6 say� i�inden en b�y�k 2. Say�y� bulan C kodunu yaz�n�z. */

int main(int argc, char *argv[]) {
	int a[6];
	int i,j;
	 printf("Lutfen 6 tane sayi girin:\n");
    for (i = 0; i < 6; i++) {
        scanf("sayi :%d", &a[i]);
    }
	 // Bubble sort algoritmas� ile say�lar� s�rala
    for (i = 0; i < 6 - 1; i++) {
        for ( j = 0; j < 6 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Say�lar� yer de�i�tir
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // En b�y�k ikinci say�y� yazd�r
    printf("En buyuk ikinci sayi: %d\n", a[4]);

	return 0;
}


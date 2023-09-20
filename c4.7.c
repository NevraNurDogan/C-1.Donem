#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

/*7. Kullanýcý tarafýndan Asal sayý girilene kadar kaç tane sayý girildiðini ekrana yazdýran
program kodunu yazýnýz.
 */

bool asal_mi(int sayi) {
	int i;
    if (sayi <= 1) {
        return false;
    }
    
    for ( i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int girilen_sayi;
    int sayac = 0;

    printf("Asal bir sayi girilene kadar sayilar girin:\n");

    while (true) {
        printf("Sayi giriniz: ");
        scanf("%d", &girilen_sayi);
        
        sayac++;


        if (asal_mi(girilen_sayi)) {
            break;
        }
    }

    printf("Asal sayi girilene kadar toplam %d sayi girildi.\n", sayac-1);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* 10. Girilen sayýnýn basamak deðerlerinin toplamýný bulan algoritmayý tasarlayýnýz. Akýþ diyagramýný 
çiziniz. */

int main() {
    int n, total = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    while (n != 0) {
        int basamak = n % 10;
        total += basamak; 
        n /= 10; 
    }
    printf("Basamaklar toplami: %d\n", total);

    return 0;
}


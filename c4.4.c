#include <stdio.h>
#include <stdlib.h>

/* 4. Klavyeden girilen bir sayýdan küçük mükemmel sayýyý bulan program kodunu yazýnýz. */

int isPerfect(int num) {
    int sum = 0,i;
    for ( i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int sayi,i;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    for ( i = sayi - 1; i >= 1; i--) {
        if (isPerfect(i)) {
            printf("%d, %d'den kucuk en buyuk mukemmel sayidir.\n", i, sayi);
            break;
        }
    }

    return 0;
}


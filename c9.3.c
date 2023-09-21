#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* 3.Parametre olarak girilen sayýdan küçük olan en büyük asal sayýyý bulan fonksiyonu yazýnýz.
sayi=23 ise; sonuç olarak 19 (asal sayý) dönecektir.*/

bool asalMi(int num) {
	int i;
    if (num <= 1) {
        return false;
    }
    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int enBuyukAsalBul(int num) {
	int i;
    for ( i = num - 1; i >= 2; i--) {
        if (asalMi(i)) {
            return i;
        }
    }
    return -1; // Eðer asal sayý bulunamazsa -1 dönebilirsiniz.
}

int main() {
    int sayi ;
    printf("Sayiyi giriniz:");
    scanf("%d",&sayi);
    int enBuyukAsal = enBuyukAsalBul(sayi);
    
    if (enBuyukAsal != -1) {
        printf("Parametre olarak girilen sayidan kucuk en buyuk asal sayi: %d\n", enBuyukAsal);
    } 
	else {
        printf("Parametre olarak girilen sayidan kucuk asal sayi bulunamadi.\n");
    }
    
    return 0;
}


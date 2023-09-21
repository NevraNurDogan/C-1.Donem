#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* 3.Parametre olarak girilen say�dan k���k olan en b�y�k asal say�y� bulan fonksiyonu yaz�n�z.
sayi=23 ise; sonu� olarak 19 (asal say�) d�necektir.*/

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
    return -1; // E�er asal say� bulunamazsa -1 d�nebilirsiniz.
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


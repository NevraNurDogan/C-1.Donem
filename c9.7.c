#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/*7. Rastgele olu�turulan N elemanl� int bir dizinin varyans ya da standard sapma de�erini bulan 
fonksiyonu yaz�n�z. Parametre 1 ise varyans, 0 ise std sp. Hesaplanacak. */
//Varyans = (Her terimin toplam� - ortalama)^2 / n
//Standart sapma varyans�n karek�k�d�r.

// Fonksiyon, verilen bir dizinin varyans veya standart sapmas�n� hesaplar.
double hesaplaVaryans(int dizi[], int N, int hesaplanacak) {
    double toplam = 0.0;
    double ortalama = 0.0;
	int i;
    for ( i = 0; i < N; i++) {
        toplam += dizi[i];
    }

    ortalama = toplam / N;

    double sonuc = 0.0;
    for (i = 0; i < N; i++) {
        if (hesaplanacak == 1) { 
            sonuc += (dizi[i] - ortalama) * (dizi[i] - ortalama);
        } else if (hesaplanacak == 0) {
            sonuc += ((dizi[i] - ortalama) * (dizi[i] - ortalama)) / N;
        }
    }

    return sonuc;
}

int main() {
    int N,i;
    printf("Dizinin eleman sayisini girin: ");
    scanf("%d", &N);

    int dizi[N];
    printf("Dizinin elemanlarini girin:\n");
    for (
	 i = 0; i < N; i++) {
        scanf("%d", &dizi[i]);
    }

    int hesaplanacak;
    printf("Hesaplanacak degeri secin (1: Varyans, 0: Standart Sapma): ");
    scanf("%d", &hesaplanacak);

    if (hesaplanacak == 1) {
        double varyans = hesaplaVaryans(dizi, N, 1);
        printf("Varyans: %.2lf\n", varyans);
    } 
	else if (hesaplanacak == 0) {
        double standartSapma = sqrt(hesaplaVaryans(dizi, N, 0));
        printf("Standart Sapma: %.2lf\n", standartSapma);
    } 
	else {
        printf("Ge�ersiz hesaplama t�r�!\n");
    }

    return 0;
}


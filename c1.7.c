#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�ndan al�nan 2 say�n�n EBOB de�erini bulan algoritmay� tasarlay�n�z. Ak�� diyagram�n� �iziniz.*/


int main(int argc, char *argv[]) {	
    int s1,s2,i;
	printf("1. sayiyi giriniz:");
	scanf("%d",&s1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&s2);
    int ebob = 1;
    int minSayi = (s1 < s2) ? s1 : s2; // K���k say�y� buluyoruz
    
    for ( i = 1; i <= minSayi; i++) {
        if (s1 % i == 0 && s2 % i == 0) {
            ebob = i;
        }
    }
    printf("EBOB: %d\n", ebob);
    
	return 0;
}

#include <stdio.h>
/*8. 5 basamakl� bir say�n�n son basama�� (en sa�daki) ilk basamaktan k���kse birbiriyle yer de�i�tiren C kodunu 
yaz�n�z. �rnek:   84572=>24578*/

int main() {
    int sayi;
    printf("5 basamakli bir sayi girin: ");
    scanf("%d", &sayi);
    if (sayi < 0) {
        sayi = -sayi;
    }
    int sonBasamak = sayi % 10;
    int ilkBasamak = sayi / 10000;
    if (sonBasamak < ilkBasamak) { 
    	int yeniSayi = sonBasamak * 10000 + sayi % 10000 / 10 * 10 + ilkBasamak;
        printf("Yer degistirilmis sayi: %d\n", yeniSayi);
    } 
	else {
        printf("Son basamak ilk basamaktan kucuk degil, yer degistirilmedi.\n");
    }

    return 0;
}


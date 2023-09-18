#include <stdio.h>
/*8. 5 basamaklý bir sayýnýn son basamaðý (en saðdaki) ilk basamaktan küçükse birbiriyle yer deðiþtiren C kodunu 
yazýnýz. Örnek:   84572=>24578*/

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


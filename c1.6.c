#include <stdio.h>
#include <stdlib.h>

/*6. Kullan�c�ndan al�nan 2 say�n�n EKOK de�erini bulan algoritmay� tasarlay�n�z. Ak�� diyagram�n� �iziniz */

int main(int argc, char *argv[]) {	
    int s1,s2;
	printf("1. sayiyi giriniz:");
	scanf("%d",&s1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&s2);
	 int ekok = 1;
    
    while (1) {
        if (ekok %s1 == 0 && ekok % s2 == 0) {
            printf("EKOK: %d\n", ekok);
            break;
        }
        ekok++;
    }
	return 0;
}



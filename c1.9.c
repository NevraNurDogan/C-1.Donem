#include <stdio.h>
#include <stdlib.h>

/*9. Girilen say�n�n ka� basamakl� oldu�unu bulan algoritmay� tasarlay�n�z. Ak�� diyagram�n� �iziniz*/

int main(int argc, char *argv[]) {
	int n,i=0;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		i++;
	}
	printf("Sayi %d basamaklidir.",i);
	return 0;
}

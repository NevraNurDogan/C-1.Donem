#include <stdio.h>
#include <stdlib.h>

/* 5. int sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };
Yukar�da verilen tam say� dizisinde say�n�n ba�tan ka��nc� s�rada oldu�unu bulan (yoksa
�Bu say� dizide bulunmamaktad�r� yazd�r�lacakt�r) program kodunu yaz�n�z.
 */

int main(int argc, char *argv[]) {
	int sayi, sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };
	int i;
	int sira=-1;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	for(i=0;i<14;i++){
		if(sayilar[i]==sayi){
		    sira=i+1;
			break;
		}
	}
	
	  if (sira != -1) {
        printf("%d sayisi dizinin %d. sirasinda bulunuyor.\n",sayi,sira);
    } else {
        printf("Bu sayi dizide bulunmamaktadir.\n");
    }
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 11. Klavyeden 0 girilene kadar girilen tam say�larda girilen say�n�n bir �nceki say�dan b�y�k
olmas� durumunu kontrol edip ka� tane b�yle bir dizilim oldu�u s�yleyen program
kodunu yaz�n�z.
�rnek: 1, 5, 7, 19, 14, 4, 8, 0 => Sonuc: 4 olacakt�r. 5>1, 7>5, 19>7, 8>4
 */

int main(int argc, char *argv[]) {
	 int sayi1,sayi2,sayac;
	 printf("Sayi giriniz:");
	 scanf("%d",&sayi1);
	 while (sayi1!=0) {
	 printf ("Sayi giriniz:");
	 scanf("%d",&sayi2);
	 if (sayi2>sayi1) {
	 sayac+=1;
	 sayi1=sayi2;
	 }
	 else {
	 sayi1=sayi2;
		 }
	 }
	 printf("%d",sayac);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*Herhangi 2 say�n�n birbirinin 3 kat� olup olmad���n� ekrana yazan C program kodunu yaz�n�z. �rnek1: sayi1:6,
sayi2:18, �rnek2: sayi1: 72, sayi2: 24 her iki �rnekte de �birbirinin 3 kat�d�r� �eklinde yazmal�d�r.*/


int main(int argc, char *argv[]) {
	int a,b;
	printf("2 tam sayi giriniz:");
	scanf("%d",&a);
	scanf("%d",&b); 
	if (a==3*b || b==3*a) {
	printf("Birbirinin 3 katidir.");	
	}
	else {
	printf("Birbirinin 3 kati degildir.");
		}
	return 0;
}

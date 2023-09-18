#include <stdio.h>
#include <stdlib.h>

/*Herhangi 2 sayýnýn birbirinin 3 katý olup olmadýðýný ekrana yazan C program kodunu yazýnýz. Örnek1: sayi1:6,
sayi2:18, Örnek2: sayi1: 72, sayi2: 24 her iki örnekte de “birbirinin 3 katýdýr” þeklinde yazmalýdýr.*/


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

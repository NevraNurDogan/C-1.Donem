#include <stdio.h>
#include <stdlib.h>

//y= 3x^2 fonksiyonuna ait C program kodunu yazýnýz

int main(int argc, char *argv[]) {
	
	int x,y;
	printf(" Bir sayi giriniz:");
	scanf("%d",&x);
	y=3*x*x;
	printf("\n y=%d",y);
	return 0;
}

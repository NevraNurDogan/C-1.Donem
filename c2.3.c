#include <stdio.h>
#include <stdlib.h>

//  y= (3a^2+2b^3+c^4)/6 fonksiyonuna ait C program kodunu yazýnýz.

int main(int argc, char *argv[]){
	int a,b,c,y;
    printf(" a sayisini giriniz:");
	scanf("%d",&a);
	printf(" b sayisini giriniz:");
	scanf("%d",&b);
	printf(" c sayisini giriniz:");
	scanf("%d",&c);
	y=(3*a*a+2*b*b*b+c*c*c*c)/6;
	printf("y=%d",y);
	
	return 0;
}

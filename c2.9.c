#include <stdio.h>
#include <stdlib.h>

//F=G*m1*m2/r^2 denklemine göre F (çekim gücü) yi hesaplayýnýz. G= 0.865 alýnýz.

int main(int argc, char *argv[]) {
	
	float m1,m2,r,F;
	float G=0.865;
	printf("Birinci kutleyi giriniz:");
	scanf("%f",&m1);
	printf("\nÝkinci kutleyi giriniz:");
	scanf("%f",&m2);
	printf("\nr'yi giriniz:");
	scanf("%f",&r);
	F=(G*m1*m2)/(r*r);
	printf("\nF=%f",F);
	
	return 0;
}

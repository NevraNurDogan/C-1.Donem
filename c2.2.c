#include <stdio.h>
#include <stdlib.h>

/* 2. Klavyeden girilen 3 say�n�n ortalamas�n� bulan program kodunu yaz�n�z.  */

int main(int argc, char *argv[]) {
	float s1,s2,s3;
	printf("3 tane sayi giriniz:");
	scanf("%f %f %f",&s1,&s2,&s3);
	printf("Ortalama:%f",((s1+s2+s3)/3));
	return 0;
}

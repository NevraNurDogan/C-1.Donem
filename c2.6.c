#include <stdio.h>
#include <stdlib.h>

//6. Klavyeden girilen Vize1, Vize2 ve Final notlar�na g�re ��rencinin y�l sonu notunu hesaplayan
//program kodunu yaz�n�z.
//Vize1: %30, Vize2: %30, Final: %40 y�l sonuna etki edecek �ekilde hesaplanacakt�r

int main(int argc, char *argv[]) {
	float v1,v2,f,ort;
	printf("1.vize notunu giriniz:");
	scanf("%f",&v1);
	printf("2.vize notunu giriniz:");
	scanf("%f",&v2);
	printf("Final notunu giriniz:");
	scanf("%f",&f);
	ort=((v1*30)+(v2*30)+(f*40))/100;
	printf("Ortalamaniz:%f",ort);
	return 0;
}

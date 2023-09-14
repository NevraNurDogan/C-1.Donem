#include <stdio.h>
#include <stdlib.h>

//6. Klavyeden girilen Vize1, Vize2 ve Final notlarýna göre öðrencinin yýl sonu notunu hesaplayan
//program kodunu yazýnýz.
//Vize1: %30, Vize2: %30, Final: %40 yýl sonuna etki edecek þekilde hesaplanacaktýr

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

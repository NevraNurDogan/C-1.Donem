#include <stdio.h>
#include <stdlib.h>

/* 17. Girilen 2 sayýdan biri taban biri üs olmak üzere sonucu hesaplayan program kodunu döngü
yardýmýyla yazýnýz. Taban=3, us=4 , Sonuc: 81*/

int main(int argc, char *argv[]) {
	int t,i,u,sonuc=1;
	printf("Taban giriniz:");
	scanf("%d",&t);
	printf("Us giriniz:");
	scanf("%d",&u);
	for (i=1;i<=u;i++){
		sonuc*=t;
	}
	printf("Sonuc:%d",sonuc);
	return 0;
}

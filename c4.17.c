#include <stdio.h>
#include <stdlib.h>

/* 17. Girilen 2 say�dan biri taban biri �s olmak �zere sonucu hesaplayan program kodunu d�ng�
yard�m�yla yaz�n�z. Taban=3, us=4 , Sonuc: 81*/

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

#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen 10 adet pozitif tam say�dan en b�y�k 2. say�y� bulan program kodunu yaz�n�z.*/

int main() {
	int i,sayi,enbuy1,enbuy2;
	for (i=0;i<=9;i++){
	printf("%d. sayiyi giriniz:",i+1);
	scanf("%d",&sayi);
	if (i==0 ){
	enbuy1=sayi;
		}
	else if (sayi>enbuy1){
	enbuy2=enbuy1;
	enbuy1=sayi;
	}
	else if (sayi>enbuy2){
	enbuy2=sayi;
	}
}
	printf("En buyuk 2. sayi:%d",enbuy2);
	return 0;
}

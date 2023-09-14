#include <stdio.h>
#include <stdlib.h>

/*8. Klavyeden girilen 3 basamaklý sayýnýn (soldan) 1. 2. ve 3. basamaðýný (Basamak Deðerlerini)
bulan program kodunu yazýnýz.
Örnek: 471 ise 1. Basamak 4, 2. Basamak 7, 3. Basamak 1 þeklinde yazmalýdýr.*/


/*int main(int argc, char *argv[]) {
	int sayi,b1,b2,b3;
	printf("3 basakmi bir sayi giriniz:");
	scanf("%d",&sayi);
	b3=sayi%10;
	sayi=sayi/10;
	b2=sayi%10;
	sayi=sayi/10;
	b1=sayi%10;
	printf("1.Basamak:%d\n",b1);
	printf("2.Basamak:%d\n",b2);
	printf("3.Basamak:%d",b3);
	return 0;
}*/
int main(int argc, char *argv[]) {
	int sayi,a,i=1;
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	int s=sayi;
	while(s!=0){
		s=s/10;
		i++;
	}
	while(sayi!=0){
		i--;
		a=sayi%10;
		sayi=sayi/10;
		printf("%d.Basamak:%d\n",i,a);
		
	}

	return 0;
}

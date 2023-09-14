#include <stdio.h>
#include <stdlib.h>

/*5. Kullanýcý klavyeden rastgele pozitif sayýlar girecektir. Bu iþlem kullanýcý sýfýr sayýsýný girene kadar 
devam edecektir. Kullanýcý sýfýr sayýsý girene kadar toplam kaç adet tek ve çift sayý girildiðini hesaplayan 
programýn algoritmasýný yazýnýz ve akýþ þemasýný çiziniz.
 */

int main(int argc, char *argv[]) {
	int n,a,b;
	a=-1;
	b=0;
	do{
	printf("Sayi giriniz:");
	scanf("%d",&n);
	if(n%2==0){
		a++;
	}
	if(n%2!=0){
		b++;
	}
	}
	while(n!=0);
	printf("Cift sayilar:%d",a);
	printf("Tek sayilar:%d",b);
		return 0;
		
}

#include <stdio.h>
#include <stdlib.h>

/*5. Kullan�c� klavyeden rastgele pozitif say�lar girecektir. Bu i�lem kullan�c� s�f�r say�s�n� girene kadar 
devam edecektir. Kullan�c� s�f�r say�s� girene kadar toplam ka� adet tek ve �ift say� girildi�ini hesaplayan 
program�n algoritmas�n� yaz�n�z ve ak�� �emas�n� �iziniz.
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

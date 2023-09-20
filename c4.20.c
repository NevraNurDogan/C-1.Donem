#include <stdio.h>
#include <stdlib.h>

/* 20. 4 basamaklý sayýlardan ilk iki basamaðýnýn toplamý son iki basamaðýnýn toplamýna eþit olan 
kaç adet sayý olduðunu bulan program kodunu yazýnýz. Örnek: 5124 sayýsý: 5+1= 2+4*/

int main(int argc, char *argv[]) {
	int i,j,b,c,a[4];
	int sayac=0;
	for(i=9999;i>999;i--){
		int temp = i;
        j = 0;
		while(temp!=0){
			a[j]=temp%10;
			temp/=10;
			j++;
			 b=a[0]+a[1];
			 c=a[2]+a[3];
	}
	if(b==c){
		printf("%d,",i);
		sayac++;
	}
}
	printf("\n4 basamakli sayilardan ilk iki basamaginin toplami son iki basamaginin toplamina esit olan % d sayi vardir",sayac);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 20. 4 basamakl� say�lardan ilk iki basama��n�n toplam� son iki basama��n�n toplam�na e�it olan 
ka� adet say� oldu�unu bulan program kodunu yaz�n�z. �rnek: 5124 say�s�: 5+1= 2+4*/

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

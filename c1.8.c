#include <iostream>

/* 8. M�kemmel say�y� bulan algoritmay� tasarlay�n�z. Ak�� diyagram�n� �iziniz.
M�kemmel say� nasil bulunur?
M�kemmel say�, say�lar teorisinde, kendisi hari� pozitif tam b�lenlerinin toplam� kendisine e�it olan say�.
 Di�er bir ifadeyle, bir m�kemmel say�, b�t�n pozitif tam b�lenlerinin toplam�n�n yar�s�na e�ittir. */

int main(int argc, char** argv) {
	int n,i,total=0;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			total+=i;
		}
	}
	
	if(total==n){
		printf("%d mukemmel sayidir.",n);
	}
	else{
		printf("%d mukemmel sayi degildir.",n);
	}
	
	return 0;
}

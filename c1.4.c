#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir say�n�n b�t�n tam b�lenlerinin toplam�n� bulup ekrana yazan program

int main(int argc, char *argv[]) {
	int sayi,i,toplam=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for (i=1;i<=sayi;i++){
	if (sayi%i==0){
	toplam=toplam+i;
	}
	  }
	printf("Toplam:%d",toplam);
	return 0;
}

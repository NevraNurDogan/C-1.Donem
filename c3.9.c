#include <stdio.h>
#include <stdlib.h>

/* 9. Klavyeden girilen s�ral� 3 tam say� ile dik ��gen �izilip �izilemeyece�ini g�steren program kodunu yaz�n�z. A^2 + B^2= C^2
�art�n� sa�lamal�d�r. �rnek: A=3, B=4, C=5 (say�lar s�ral� girilmi�tir) girildi�inde sonu� �D�K ��GEN ��Z�LEB�L�R�
yazmal�d�r. */

int main(int argc, char *argv[]) {
	int a,b,c,toplam,toplam1,toplam2,B,C,A;
	printf("a degerini giriniz:");
	scanf("%d",&a);
	printf("b degerini giriniz:");
	scanf("%d",&b);
	printf("c degerini giriniz:");
	scanf("%d",&c);
	toplam=a*a+b*b;
	toplam1=b*b+c*c;
	toplam2=a*a+c*c;
	C=c*c;
	A=a*a;
	B=b*b;
	if (C==toplam || A==toplam1 ||B==toplam2){
		printf("DIK UCGEN CIZILEBILIR.");
	}
	else{ printf("DIK UCGEN CIZILEMEZ.");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 4. Kullan�c� taraf�ndan girilen iki string ifadeyi kar��la�t�ran ve (k���k, b�y�k veya e�it �eklinde) sonu�
d�nd�r�n�z. Not: Strcmp kullan�lmayacakt�r.
Str1: �ali�, Str2: �alc� Sonuc: str1 str2�den buyuktur.
Str1: �ali�, Str2: �alz� Sonuc: str1 str2�den kucuktur. */

int main(int argc, char *argv[]) {

	char dizi[200],dizi2[200];
	int i,j,toplam=0,toplam1;
	printf("str1:");
	gets(dizi);
	printf("str2:");
	gets(dizi2);
	while (dizi[i]!='\0')
	i++;
	for(j=0;j<i;j++){	
        toplam+=dizi[j];
	}

	i=0;
	toplam1=0;

	while (dizi2[i]!='\0')
	i++;
	for(j=0;j<i;j++){
        toplam1+=dizi2[j];
	}

	if (toplam==toplam1){
		printf("Esit");
	}
	if (toplam>toplam1){
		printf("str1 str2den buyuktur.");
	}
	if (toplam<toplam1){
		printf("str1 str2den kucuktur.");
	}
	return 0;
	
}

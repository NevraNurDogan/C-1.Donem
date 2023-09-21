#include <stdio.h>
#include <stdlib.h>

/* 7. Kullanýcý tarafýndan girilen string ifadede her kelime ‘_’ ile ayrýlmýþ olup bu string ifadeden oluþan kelimeleri 
bir matris yapýsýna gönderiniz.
Örnek: “ali_veli_sami_sukru” Sonuc: 4 olacaktýr.matriste yazdýr*/

int main(int argc, char *argv[]) {
	char dizi[300];
	int sayac=0,i,j,k,gecici;
	printf("ifadeyi giriniz:");
	gets(dizi);
	while(dizi[i]!='\0')
	i++;
	for(j=0;j<i;j++){
	if(dizi[j]==' '){
		dizi[j]='_';
			sayac++;
		}
	}
	printf("%s\n",dizi);
	printf("Sonuc:%d\n\t",sayac+1);
	
	for (k=0;k<i;k++){
		if (dizi[k]=='_'){
			printf("\n");
			dizi[k]=' ';
		}
		printf("%c\t",dizi[k]);
	}
	
	
	return 0;
}

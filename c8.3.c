#include <stdio.h>
#include <stdlib.h>

/* 3. Kullan�c� taraf�ndan girilen string ifadede her kelime �_� ile ayr�lm�� olup bu string ifadenin ka� kelimeden
olu�tu�unu bulunuz.
�rnek: �ali_veli_sami_sukru� Sonuc: 4 olacakt�r.*/

int main(int argc, char *argv[]) {
	char dizi[300];
	int sayac=0,i,j;
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
	printf("Sonuc:%d",sayac+1);
	
	return 0;
}

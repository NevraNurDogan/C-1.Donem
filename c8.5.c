#include <stdio.h>
#include <stdlib.h>

/* 5. Bir metinde baþtan sona (bir sonraki > bir önceki) kaç tane kendisinden büyük karakter olduðunu bulunuz.
Örnek: “abcdezmf” Sonuc: b>a, c>b, d>c, e>d, z>e þeklinde 5 adet bu kurala uygun karakter dizisi vadýr*/

int main(int argc, char *argv[]) {
	char dizi[200];
	int i,j,sayac=0;
	printf("Metin giriniz:");
	gets(dizi);
	while (dizi[i]!='\0'){
	i++;		
	}

	printf("Sonuc:");
	for (j=0;j<i;j++){
		if (dizi[j]<dizi[j+1]){
			sayac++;
			printf("%c>%c\t,",dizi[j+1],dizi[j]);
		}
	}
	printf("%d adet",sayac);
	
	return 0;
}

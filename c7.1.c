#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 1. 0-100 arasýndaki rastgele sayýlardan oluþturulmuþ bir NxN’lik bir matris üzerinde en küçük, en büyük ve
ortalama sayýyý bulunuz. */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int n,i,j,enb,enk;
	float ort,toplam=0;
	printf("n degerini giriniz:");
	scanf("%d",&n);
	int matris[n][n];
	
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			matris[i][j]=rand()%100;
		}
	}
	enb=matris[0][0];
	enk=matris[0][0];
	
	for (i=0;i<n;i++){
		printf("\n");
		for (j=0;j<n;j++){
		printf("%d \t",matris[i][j]);
		toplam+=matris[i][j];
		if (matris[i][j]>=enb){
			enb=matris[i][j];
		}
		if (matris[i][j]<=enk){
			enk=matris[i][j];
		}
		}
	}
	
	ort=toplam/(n*n);
	printf("\n Ortalama:%.2f",ort);
	printf("\n En buyuk:%d",enb);
	printf("\n En kucuk:%d",enk);
	return 0;
}

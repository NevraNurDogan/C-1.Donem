#include <stdio.h>
#include <stdlib.h>

/*0-10 arasý rastgele sayýlardan oluþturulmuþ NxN bir matris içerisinde iki köþegende bulunan sayýlarýn yerlerini 
ters çeviren program kodunu yazýnýz. N=3 ise; */

int main(int argc, char *argv[]) {
	int n,i,j,gecici,gecici1;
	printf("n degerini giriniz:");
	scanf("%d",&n);
	int matris[n][n];
	for (i=0;i<n;i++){
			printf("\n");
		for (j=0;j<n;j++){
			matris[i][j]=rand()%10;
			printf("%d \t",matris[i][j]);
		}
	}
	
	gecici=matris[0][0];
	matris[0][0]=matris[n-1][0];
	matris[n-1][0]=gecici;
	
	gecici1=matris[0][n-1];
	matris[0][n-1]=matris[n-1][n-1];
	matris[n-1][n-1]=gecici1;
	printf("\n********************************\n");
	for (i=0;i<n;i++){
		printf("\n");
		for (j=0;j<n;j++){
				printf("%d \t",matris[i][j]);
		}
	}
	return 0;
}

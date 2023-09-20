#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 3. 1’den 10’a kadar olan sayýlarýn n, nxn, n!, n^n deðerlerini matrise aþaðýdaki gibi matris oluþturunuz*/

int main(int argc, char *argv[]) {
	int n=10,i,j,faktor=1,us;
	int matris[10][4];
	printf("n:\t");
	for (i=0;i<1;i++){
		for (j=1;j<n;j++){
			matris[i][j]=j;
			printf("%d \t",matris[i][j]);
		}
	}
		printf("\nn*n:\t");
		for (i=1;i<2;i++){
		for (j=1;j<n;j++){
			matris[i][j]=(j*j);
			printf("%d \t",matris[i][j]);
		}
	}
	printf("\nn!:\t");
		for (i=2;i<3;i++){
		for (j=1;j<n;j++){
			faktor*=j;
			matris[i][j]=faktor;
			printf("%d \t",matris[i][j]);
	
		}
	}
	printf("\nn^n:\t");
		for (i=3;i<4;i++){
		    for (j=1;j<n;j++){
		    us=	pow(j,j);
				printf("%d\t",us);
				}
		}
	
	
	return 0;
}

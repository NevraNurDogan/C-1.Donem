
#include <stdlib.h>
#include <stdio.h>


/* NxN lik bir matristeki verileri sat�rlar s�t�n olacak �ekilde yer de�i�tiriniz. Yazd�rma i�leminde yer de�i�ikli�i 
yapmay�n�z. */

int main(){
	int i,j,n,b=1;
	
	printf ("n degerini giriniz:");
	 scanf("%d",&n);
	
	 int matris[n][n];
	
	for(i=0;i<n;i++){
			printf("\n");
		for(j=0;j<n;j++){
			matris[i][j]=b;
			b++;
			printf("%d\t",matris[i][j]);
			
		}
	
	}
	printf("\n*********\n");
	b=1;
		for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 6. NxN lik bir matristeki verileri satýrlar sütün olacak þekilde yer deðiþtiriniz. Yazdýrma iþleminde yer deðiþikliði
yapmayýnýz. N=3 durumunda;*/
/*
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
		}printf("\n");
	}
	return 0;
}*/
#include <stdio.h>

int main() {
    int N = 3; // Matris boyutunu 3 olarak varsayalým
    int matris[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Örnek bir 3x3 matris
    int i,j;

    printf("Orijinal Matris:\n");
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            printf("%2d ", matris[i][j]);
        }
        printf("\n");
    }

    // Matrisin satýrlarýný sütunlara ve sütunlarý satýrlara yer deðiþtirme
    int transpose[3][3];

    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            transpose[j][i] = matris[i][j];
        }
    }

    printf("\nYer Degistirilmis Matris:\n");

    // Yer deðiþtirilmiþ matrisi yazdýrma
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            printf("%2d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


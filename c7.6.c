#include <stdio.h>
#include <stdlib.h>

/* 6. NxN lik bir matristeki verileri sat�rlar s�t�n olacak �ekilde yer de�i�tiriniz. Yazd�rma i�leminde yer de�i�ikli�i
yapmay�n�z. N=3 durumunda;*/
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
    int N = 3; // Matris boyutunu 3 olarak varsayal�m
    int matris[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // �rnek bir 3x3 matris
    int i,j;

    printf("Orijinal Matris:\n");
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            printf("%2d ", matris[i][j]);
        }
        printf("\n");
    }

    // Matrisin sat�rlar�n� s�tunlara ve s�tunlar� sat�rlara yer de�i�tirme
    int transpose[3][3];

    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            transpose[j][i] = matris[i][j];
        }
    }

    printf("\nYer Degistirilmis Matris:\n");

    // Yer de�i�tirilmi� matrisi yazd�rma
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            printf("%2d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


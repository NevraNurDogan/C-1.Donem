#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 2. N öðrenci ve M adet ders olacak þekilde 0-100 arasýndaki rastgele sayýlardan oluþturulmuþ bir matris üzerinde
öðrenci ortalamasý 50 üzerinde olan kaç öðrenci olduðunu bulunuz. Ortalama deðeri matris içinde olacaktýr.  */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int n,m,i,j,M,sayac=0;
	float toplam=0,ort,dizi[32];
	printf("Ogrenci sayisini giriniz:");
	scanf("%d",&n);
	printf("Ders sayisini giriniz:");
	scanf("%d",&m);
	int matris[n][m];
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){	 
			matris[i][j]=rand()%100;
		}
	}
	printf("                ");
	for(i=0;i<m;i++){
		printf("%d.not   ",i+1);
	}

		printf("  ort  ");
		
		
	for(i=0;i<n;i++){
	    	printf("\n%d.Ogrenci notlari:",i+1); 
	   for(j=0;j<m;j++){
	   	toplam+=matris[i][j];
			ort=(float)toplam/m;
			dizi[i]=ort;
	   		printf("%d \t",matris[i][j]);
		}	
		printf("%.2f ",ort);
		ort=0;
		toplam=0;
	} 
	

	for(i=0;i<n;i++){
	if(dizi[i]>=50){
		sayac++;
		}	
	}	
	printf("\nOrtalamasi 50 uzerinde olan : %d",sayac);
	
	return 0;
}

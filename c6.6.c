#include <stdio.h>
#include <stdlib.h>

/* 6. [0-100] aralýðýnda N adet küçükten büyüðe sýralý olacak þekilde rastgele sayý üretiniz. */

int main(int argc, char *argv[]) {
    int n,i,j,gecici;
	int dizi[32];
    printf("Eleman sayisini giriniz:");
   	scanf("%d",&n);
   	srand(time(NULL));
   	for (i=0;i<n;i++){
   		dizi[i]=rand()%100;
	   }
	   
	   	for (i=0;i<n-1;i++){
	   		for(j=i+1;j<n;j++){
			   if(dizi[i]>dizi[j]){
	   			gecici=dizi[i];
	   			dizi[i]=dizi[j];
	   			dizi[j]=gecici;
			     }
			 }
		 }
		
		   	printf("\n");
		   for (i=0;i<n;i++){
		   	printf("%d\t",dizi[i]);
		   }
	return 0;
}

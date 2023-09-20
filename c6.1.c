#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 1. N adet rastgele sayý [0-100] aralýðýnda üretiniz. Ortalamadan küçük olan sayýlarý 
ortalamadan büyük olacak þekilde yeniden üretiniz. */

int main(int argc, char *argv[]) {
		int n,i,sayi;
		float toplam=0,ort;
	printf("Eleman sayisini giriniz:");
	scanf("%d",&n);
	int dizi[32]={};
	srand(time(NULL));
     for(i=0;i<n;i++){ 
		sayi=rand()%100 ; 
		printf("%d.sayi=%d\n",i+1,sayi);
    	dizi[i]=sayi;
		toplam=toplam+dizi[i];
		getch();
	}
    ort=toplam/n;
    printf("%2.f",ort);
    for(i=0;i<n;i++)  {
	if (dizi[i]<ort) {
	     dizi[i]=ort+rand()%45 ; 
	}
	else {
	dizi[i]=dizi[i];
	}
	}
	 for(i=0;i<n;i++){
	 printf("\n%d.sayi %d ",i+1,dizi[i]);
	
	 }
	return 0;
}

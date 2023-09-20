#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*2. N adet [0-1] aralýðýnda ondalýk rastgele sayý üretiniz. En büyük ve en küçük sayýyý 
bulunuz */

int main(int argc, char *argv[]) {
	int n,i;
	float sayi,enb,enk;
	printf("Eleman sayisini giriniz:");
	scanf("%d",&n);
	float dizi[32]={};
	srand(time(NULL));
	
     for(i=0;i<n;i++)
	{
		sayi=rand()%11;
		sayi/=10; 
		printf("%d.sayi=%.2f\n",i+1,sayi);
    	dizi[i]=sayi;
		getch();
	}
	enb=dizi[0];
	for(i=0;i<n;i++){
		if(enb<dizi[i]){
			enb=dizi[i];
		}
	}
	printf("En buyuk sayi:%f\n",enb);
	
	enk=dizi[0];
	for(i=0;i<n;i++){
		if(enk>dizi[i]){
			enk=dizi[i];
		}
	}
	printf("En kucuk sayi:%f",enk);
	return 0;
}

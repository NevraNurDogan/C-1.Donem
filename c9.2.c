#include <stdio.h>
#include <stdlib.h>

/*2. Parametre olarak verilen iki tam sayý arasýndaki sayýlardan 3’ün katý olan sayýlarýn ortalamasýný bulan
fonksiyonu yazýnýz.*/

   void OrtalamaHesapla(int sayi1, int sayi2){
      	int j,sayac=0,enb,enk;
      	float toplam=0,ort=0;
      	if(sayi1>sayi2){
      		enb=sayi1;
      		enk=sayi2;
		  }
		  else{
		  	enb=sayi2;
      		enk=sayi1;
		  	
		  }
      	for (j=enk;j<enb;j++){
      		if(j%3==0){
      			toplam+=j;
      			sayac++;
			  }
		  }
		  ort=toplam/sayac;
		  printf("ortalama:%.2f",ort);
	  }
    

int main(int argc, char *argv[]) {
	int x,y;
	printf("sayi 1'i giriniz:");
	scanf("%d",&x);
	printf("sayi 2'yi  giriniz:");
	scanf("%d",&y);
	 OrtalamaHesapla(x,y);
	return 0;
}

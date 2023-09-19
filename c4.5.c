#include <stdio.h>
#include <stdlib.h>

/* 5. Klavyeden girilen 2 sayý arasýnda kaç tane asal sayý olduðunu bulan program kodunu yazýnýz.*/

int main(int argc, char *argv[]) {
	
	int sayi1,sayi2,i,j,sayac,adet=0;
	printf("1. sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1<sayi2){
	for (i=sayi1+1;i<=sayi2;i++){
	sayac=0;
     	for (j=2;j<i;j++){
			 if (i%j==0){
	 			sayac++;}
	           }

    if (sayac==0){
		printf("%d \t",i);
		adet=adet+1;
    	} 
	}
	printf("\nAsal sayi adeti:%d",adet);
}
	if(sayi1>sayi2){
	for (i=sayi2+1;i<=sayi1;i++){
	sayac=0;
     	for (j=2;j<i;j++){
			 if (i%j==0){
	 			sayac++;}
	           }

    if (sayac==0){
		printf("%d \t",i);
		adet=adet+1;
    	} 
	}
	printf("\nAsal sayi adeti:%d",adet);
}


	return 0;
}

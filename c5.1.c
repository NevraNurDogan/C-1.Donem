#include <stdio.h>
#include <stdlib.h>

/* 1. Kullan�c� taraf�ndan girilen n tane tam say�dan pozitif ve negatif olarak farkl� dizilerde
 g�steren program kodunu yaz�n�z.*/

int main() {
     int dizi[32],dizipoz[32],dizineg[32];
	 int i,sayi,sayac1=0,sayac2=0;
	 printf("Eleman sayisi:");
	 scanf ("%d",&sayi);
	 for(i=0;i<sayi;i++){  
	 printf("Dizinin %d. degerini giriniz:",i+1);
	 scanf("%d",&dizi[i]);
	 }

	for (i=0;i<sayi;i++){
	 if (dizi[i]>0) {
	 dizipoz[sayac1]=dizi[i];	
	 sayac1++;
	 }
	 
	else {
	 dizineg[sayac2]=dizi[i];
	 sayac2++;
	 
		 }
	}	
	 printf("pozitif eleman sayisi: %d\n",sayac1);
     printf("negatif eleman sayisi: %d\n",sayac2);

	 printf("pozitif sayi dizisi:\t");

	  for(i=0;i<sayac1;i++){     
	  printf("%d\t",dizipoz[i]);
	  }	
	  printf("\nnegatif sayi dizisi:\t"); 
	    for(i=0;i<sayac2;i++){     
	  printf("%d\t",dizineg[i]);
	  }

     
	return 0;
}

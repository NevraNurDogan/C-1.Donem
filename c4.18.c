#include <stdio.h>
#include <stdlib.h>

/*18. Girilen sayýdan küçük en büyük 3. asal sayýyý bulan program kodunu yazýnýz. Örnek: Girilen sayý:
12 ise sonuc: 5 tir. Asal sayýlar: 11, 7, 5
*/

int main(int argc, char *argv[]) {
	int i,sonuc,sayac,j,sayi,k,enb=0,enb2=0,enb3=0,D,E=0,m;
	 
	printf("Bir Sayi Giriniz:");
	scanf("%d",&sayi);

   for(m=2;m<sayi;m++){
   	D=sayi%
   	if(D==0){
   	E=E+1;
	}
}
     if(E==0){
   		sayi=sayi-1;
	}	

   for(i=sayi;i>1;i--){
		sayac=0;
		for(j=2;j<i;j++){
	    sonuc=i%j;
			   if(sonuc==0){
				sayac=sayac+1;
		       }
		}
		
		if(sayac==0) {
		    if(i>enb){
			enb=i;
		    }
	    	if(i<enb && i>enb2){
			    enb2=i;
	     	}
	        if(i<enb2 && i>enb3){
	        	enb3=i;
			}
		}
	}
	
		printf("En buyuk %d\n",enb);
		printf("2. Buyuk %d\n",enb2);
	    printf("3. Buyuk %d\n",enb3);
	return 0;
}

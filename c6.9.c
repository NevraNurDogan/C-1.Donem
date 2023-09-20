#include <stdio.h>
#include <stdlib.h>

/* 9. Sýrasýyla bir asal ve bir asal olmayan olmak üzere [1-100] aralýðýnda N adet rastgele sayý üretiniz.*/

int main(int argc, char *argv[]) {
	
	int n,j,sayi,sayi1,sayac,sayac1;
     printf("Eleman sayisini giriniz:");
	scanf("%d",&n);
	srand(time(NULL));
     
    while(n > 0){
        sayac = 0;
        sayi = 2+ rand()%100;
        for( j = 2; j < sayi; j++){
            if(sayi % j == 0){
                sayac++;
            }
        }
        if(sayac == 0){
            printf("Asal sayi = %d\n",sayi);
            n--;
            sayac1=0;
            sayi1 = 1 + rand()%100;
             for( j = 2; j < sayi1; j++){
            if(sayi1 % j == 0){
                sayac1++;
            }
        }
        if(sayac1 != 0){
          printf("Asal olmayan sayi = %d\n",sayi1);
          n--;
			}    
        } 
	}
	return 0;
}

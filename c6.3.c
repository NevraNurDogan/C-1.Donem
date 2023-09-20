#include <stdio.h>
#include <stdlib.h>

/* 3. N adet rastgele asal sayý üretiniz. */

    int main(int argc, char *argv[]) {
	
	int n,j,sayi,sayac;
     printf("Eleman sayisini giriniz:");
	scanf("%d",&n);
	srand(time(NULL));
     
    while(n > 0){
        sayac = 0;
        sayi = 1 + rand()%100;
        for( j = 2; j < sayi; j++){
            if(sayi % j == 0){
                sayac++;
            }
        }
        if(sayac == 0 && sayi!=1){
            printf("Asal sayi = %d\n",sayi);
            n--;
        }
    }

		
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 3. 10 sayýsýndan büyük tek ve 3’e tam bölünen ilk 5 adet tam sayýyý diziye alan ve büyükten
küçüðe yazdýran program kodunu yazýnýz. */

int main(int argc, char *argv[]) {
	int i,j,sayac=5;

		for(i=10;i<100;i++){
		if (i%3==0 && i%2==1 && sayac!=0){
    	sayac--;
	    printf("%d\n",i);
			 }
		}
	

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 3. 10 say�s�ndan b�y�k tek ve 3�e tam b�l�nen ilk 5 adet tam say�y� diziye alan ve b�y�kten
k����e yazd�ran program kodunu yaz�n�z. */

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

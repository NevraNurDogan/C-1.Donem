#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*4. N adet aralar�nda en az 5 fark olacak �ekilde [10-70] aral���nda rastgele say� �retiniz.*/

int main(int argc, char *argv[]) {
	int n,sayi,sayi1;
    printf("Eleman sayisini giriniz:");
   	scanf("%d",&n);
 	srand(time(NULL));
 	while(n>0){
 		sayi = 10 + rand()%70;
 		sayi1 = 10 + rand()%70;
 		if(sayi-sayi1>=5) {

			 printf("%d\n",sayi);
			 n--;
			  printf("%d\n",sayi1);
		    n--;
	 }
	 }
 		
	 	 
	
	
	 
	return 0;
}

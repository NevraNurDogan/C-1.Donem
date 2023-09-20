#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 8. Sýrasýyla bir tek ve bir çift olmak üzere [1-100] aralýðýnda N adet rastgele sayý üretiniz. */

int main(int argc, char *argv[]) {
   srand(time(NULL));
	int sayi,n,i,k=0,l=0,a;
	printf("n degerini giriniz:");
	 scanf("%d",&n);
	 	int cift[n],tek[n];
      a=n;
     while(n+5>0){
	sayi=1+rand()%100;
		if(sayi%2==0){
		cift[l]=sayi;
		l++;
	}
	else{
		tek[k]=sayi;;
		k++;
	}
	n--;
} 
    for(i=0;i<a/2;i++){
    printf("%d\n%d\n",cift[i],tek[i]);
  	}
	return 0;
}

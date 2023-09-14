#include <iostream>

/* 8. Mükemmel sayýyý bulan algoritmayý tasarlayýnýz. Akýþ diyagramýný çiziniz.
Mükemmel sayý nasil bulunur?
Mükemmel sayý, sayýlar teorisinde, kendisi hariç pozitif tam bölenlerinin toplamý kendisine eþit olan sayý.
 Diðer bir ifadeyle, bir mükemmel sayý, bütün pozitif tam bölenlerinin toplamýnýn yarýsýna eþittir. */

int main(int argc, char** argv) {
	int n,i,total=0;
	printf("Sayi giriniz:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			total+=i;
		}
	}
	
	if(total==n){
		printf("%d mukemmel sayidir.",n);
	}
	else{
		printf("%d mukemmel sayi degildir.",n);
	}
	
	return 0;
}

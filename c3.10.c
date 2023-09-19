#include <stdio.h>
#include <stdlib.h>

/* 10. Girilen (sýralý) 3 sayýnýn birbirleri arasýndaki farka göre 4. Sayýyý bulan programý yazýnýz.
Örnek: 1. Sayý 3, 2. Sayý 7, 3. Sayý 13 ise 4. Sayý: 21 olmalýdýr. Sayýlar 4-6-8 olarak artmýþtýr. */

int main(int argc, char *argv[]) {  
	int s1 ,s2,s3,s4;
	printf ("1. sayiyi girini:");
	scanf("%d",&s1);
	printf ("2. sayiyi girini:");
	scanf("%d",&s2);
	printf ("3. sayiyi girini:");
	scanf("%d",&s3);
	int f1=s1-s2;
	int f2=s2-s3;
	if (f1<0){
		f1*=-1;
	}
	if (f2<0){
		f2*=-1;
	}
	if (f1==f2){
		s4=(s3+(f1));
		printf("**4. sayi %d'dir.",s4);
	}
	else if (f1!=f2 && f2<f1){
    	s4=(s3-(f2+(f2-f1)));
		printf("-4. sayi %d'dir.",s4);
	}
	
	else if (f1!=f2 && f2>f1){
		s4=(s3+(f2+(f2-f1)));
		printf("4. sayi %d'dir.",s4);
	}
	
	else{
	printf ("Bu bir oruntu degildir.");
	}

	return 0;
}

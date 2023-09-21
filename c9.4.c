#include <stdio.h>
#include <stdlib.h>

/* 4. Parametre olarak char dizisi ve bir adet char elemaný alan ve bu dizi içinde aranan elemanýn sondan 
kaçýncý sýrada olduðunu bulan (yoksa -1 döndüren) fonksiyonu yazýnýz.
Dizi Boyut hesabý için int adet= sizeof(dizi); kullanabilirsiniz. char charDizi[]="Programlamanýn Temeli"; aranan=’m’ ise Sonuç 4 
dönecektir.*/
	int sondan(char a[],char aranan){
		int i,k=0;
		int adet=strlen(a);
		for(i=adet-1;i>-1;i--){
			k++;
			if (a[i]==aranan){
				return k;
			}
		}
		return -1;
	}
	int main(){
		char dizi[50];
		printf("string gir:");
		gets(dizi);
		char r;
		printf("istedigini gir:");
		scanf("%c",&r);
		printf("%d",sondan(dizi,r));
	
	
	return 0;
}

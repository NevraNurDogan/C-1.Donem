#include <stdio.h>
#include <stdlib.h>

/* 4. Parametre olarak char dizisi ve bir adet char eleman� alan ve bu dizi i�inde aranan eleman�n sondan 
ka��nc� s�rada oldu�unu bulan (yoksa -1 d�nd�ren) fonksiyonu yaz�n�z.
Dizi Boyut hesab� i�in int adet= sizeof(dizi); kullanabilirsiniz. char charDizi[]="Programlaman�n Temeli"; aranan=�m� ise Sonu� 4 
d�necektir.*/
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

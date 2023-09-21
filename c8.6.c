#include <stdio.h>
#include <stdlib.h>

/* 6. Kullanýcý tarafýndan girilen bir string dizisini yine kullanýcýnýn belirtmiþ olduðu n. elemandan itibaren kesen ve 
bu oluþan yeni iki stringi iki ayrý string dizisine gönderiniz.
Örnek: “kolaygelsin”, Kullanýcý 5 girerse; 5. Elemandan itibaren bölersek;
5. eleman ‘g’ olduðu için str1=”kolay”, str2=”gelsin” olacaktýr.*/

int main(int argc, char *argv[]) {
	char dizi[200],dizi2[200];
	int i,j,n,k,a;
	printf("Metin giriniz:");
	gets(dizi);
	
	while(dizi[i]!='\0'){
		i++;
	}

	printf("n degerini giriniz:");
    scanf("%d",&n);
    
    a=i-n;
    k=0;
    for (j=n;j<i;j++){
		if(k<a){
			dizi2[k]=dizi[j];
			k++;
		}
	}
    dizi2[i]='\0';
		
	for (j=n;j<i;j++){
    		dizi[j]='\0';
	}
	
	
	printf("str1=%s \nstr2=%s",dizi,dizi2);
	return 0;
}

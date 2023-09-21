#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* 2. Kullanýcý tarafýndan girilen string ifade içinde yine kullanýcý tarafýndan girilen n. elamandan baþlamak ve 
sonlandýrmak üzere girilen string ifadenin n sayýsýna göre palindrom olup olmadýðýný bulunuz.
Not: Palindrom baþtan ve sondan kontrol edildiðinde tüm karakterleri sýrasýyla ayný olan string ifadelerdir. Strlen 
fonksiyonu kullanabilirsiniz.
Örnek1: abcdcbt 2. elemandan itibaren kontrol edilecek ise;
bcdcb baþtan ve sondan eþit olduðu için seçilen ifade palindromdur.
Örnek2: aKbcdcbRt 3. elemandan itibaren kontrol edilecek ise;
bcdcb yine baþtan ve sondan eþit olduðu için seçilen ifade palindromdur.*/

int main(){
	
	char kelime[100];
	printf("\n Kelime giriniz : ");
	gets(kelime);
	int n,i;
	printf("\nKacinci harften itibaren kontrol edilecek:");
	scanf("%d",&n);
	int uzunluk;
	uzunluk=strlen(kelime);
	int baslangic=n-1;
	int son=uzunluk-n;
	char tersten[100];
	int index=0;
	
	while(kelime[index]!='\0'){
		tersten[index]=kelime[uzunluk-index-1];
		index++;
	}
	printf("\n uzunluk:%d",uzunluk);
	printf("\n %s  ve tersi :%s",kelime,tersten);
	
	
	bool uygunmu=true;
	for( i=baslangic;i<=son;i++){
		if(kelime[i]!=tersten[i]){
			uygunmu=false;
			break;
		}
	}
	
	
	if(uygunmu==true){
		
		printf("\n polindrom saglanir.");
		
	}
	else{
	printf("\n polindrom saglanmaz.");
	}
	
	

	
	
	
	

	return 0;
}

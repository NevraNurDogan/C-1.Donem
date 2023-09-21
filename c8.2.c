#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* 2. Kullan�c� taraf�ndan girilen string ifade i�inde yine kullan�c� taraf�ndan girilen n. elamandan ba�lamak ve 
sonland�rmak �zere girilen string ifadenin n say�s�na g�re palindrom olup olmad���n� bulunuz.
Not: Palindrom ba�tan ve sondan kontrol edildi�inde t�m karakterleri s�ras�yla ayn� olan string ifadelerdir. Strlen 
fonksiyonu kullanabilirsiniz.
�rnek1: abcdcbt 2. elemandan itibaren kontrol edilecek ise;
bcdcb ba�tan ve sondan e�it oldu�u i�in se�ilen ifade palindromdur.
�rnek2: aKbcdcbRt 3. elemandan itibaren kontrol edilecek ise;
bcdcb yine ba�tan ve sondan e�it oldu�u i�in se�ilen ifade palindromdur.*/

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 1. Kullan�c� taraf�ndan girilen string ifadeyi ters �evirip yeni bir diziye yerle�tiriniz.
�rnek: Str1: �abcde123� Sonuc: Str2:�321edcba*/




int main() {
    char str1[100]; 
    char str2[100]; 

    printf("Bir string ifade girin: ");
    gets(str1);
	int i;
    int len = strlen(str1); 

    for ( i = 0; i < len; i++) {
        str2[i] = str1[len - 1 - i];
    }

    str2[len] = '\0'; 

    printf("Ters cevrilmis string: %s\n", str2);

    return 0;
}


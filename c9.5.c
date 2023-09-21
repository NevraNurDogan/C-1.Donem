#include <stdio.h>
#include <stdlib.h>

/* 5. Parametre olarak verilen bir string içindeki yine parametre olarak verilen karakter yerine yeni 
karakterle deðiþtiren ve yeni stringi döndüren fonksiyonu yazýnýz. “MERHABA”, ‘A’, ‘X’, ’MERHXHX’ */
#include <stdio.h>
#include <string.h>

char* karakterDegistir(char* str, char eskiKarakter, char yeniKarakter) {
    int uzunluk = strlen(str);
    int i;
    for ( i = 0; i < uzunluk; i++) {
        if (str[i] == eskiKarakter) {
            str[i] = yeniKarakter;
        }
    }
    
    return str;
}

int main() {
    char kelime[100];
    char eskiKarakter;
    char yeniKarakter;
    
    printf("Kelimeyi girin: ");
    scanf("%s", kelime);
    
    printf("Degistirilecek karakteri girin: ");
    scanf(" %c", &eskiKarakter); 
    printf("Yeni karakteri girin: ");
    scanf(" %c", &yeniKarakter); 
    
    karakterDegistir(kelime, eskiKarakter, yeniKarakter);
    
    printf("Degistirilmis kelime: %s\n", kelime);
    
    return 0;
}


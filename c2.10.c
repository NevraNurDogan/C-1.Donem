#include <stdio.h>
#include <stdlib.h>

/*Klavyeden alınan 5 basamaklı bir sayının basamak değerleri bulan yazdıran C kodunu
yazınız.*/

/*int main(int argc, char *argv[]) {
	int sayi,bas1,bas1deg,bas2,bas2deg,bas3,bas3deg,bas4,bas4deg,bas5,bas5deg;
	printf("5 basamakli bir sayi giriniz");
	scanf("%d",&sayi);
	bas1=sayi/10000;
	bas1deg=bas1*10000;
	sayi=(sayi-bas1deg);
	
	bas2=sayi/1000;
	bas2deg=bas2*1000;
	sayi=sayi-bas2deg;
	
	bas3=sayi/100;
	bas3deg=bas3*100;
	sayi=sayi-bas3deg;
	
	bas4=sayi/10;
	bas4deg=bas4*10;
	sayi=sayi-bas4deg;
	
	bas5=sayi/1;
	bas5deg=bas5*1;
	sayi=sayi-bas5deg;
	
	printf("1.Basamak degeri:%d\n",bas1deg);
	printf("2.Basamak degeri:%d\n",bas2deg);
	printf("3.Basamak degeri:%d\n",bas3deg);
	printf("4.Basamak degeri:%d\n",bas4deg);
	printf("5.Basamak degeri:%d",bas5deg);
	return 0;
}*/
#include <stdio.h>
/*Klavyeden alınan 5 basamaklı bir sayının basamak değerleri bulan yazdıran C kodunu
yazınız.*/
int main() {
     int sayi;
     int basamakDegeri = 1;
     int i=0;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    if (sayi < 0) {
        sayi = -sayi;
    }
    while (sayi > 0) {
    	i++;
        int basamak = sayi % 10;
        printf("%d. Basamak Degeri: %d\n", i, basamak * basamakDegeri);
        basamakDegeri *= 10;
        sayi /= 10;
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

// F= (K - 273.15) � 9/5 + 32 form�l�ne g�re girilen Kelvin (K) de�erine g�re Fahrenheit�a
// �eviren program kodunu yaz�n�z

int main() {
	float F,K;
	printf("K degerini giriniz:");
	scanf("%f",&K);
	F=((K-273.15)*(9/5))+(32);
	printf("F:%f",F);
	
	return 0;
}

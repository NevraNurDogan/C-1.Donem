#include <stdio.h>
#include <stdlib.h>

// F= (K - 273.15) × 9/5 + 32 formülüne göre girilen Kelvin (K) deðerine göre Fahrenheit’a
// çeviren program kodunu yazýnýz

int main() {
	float F,K;
	printf("K degerini giriniz:");
	scanf("%f",&K);
	F=((K-273.15)*(9/5))+(32);
	printf("F:%f",F);
	
	return 0;
}

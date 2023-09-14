#include <stdio.h>
#include <stdlib.h>
	// vizenin yüzde 40 ý finalin yüzde 60 ý
int main(int argc, char *argv[]) {
	float vize,final,ort;
	printf("Vize giriniz:\n");
	scanf("%f",&vize);
	
	printf("Final giriniz:\n");
	scanf("%f",&final);
	
	ort=((vize*40)+(final*60))/100;
	printf("Ortalamaniz:\n %f",ort);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
	// vizenin y�zde 40 � finalin y�zde 60 �
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

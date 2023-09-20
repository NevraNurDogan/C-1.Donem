#include <stdio.h>
#include <stdlib.h>

/* 6. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarıdaki sayı dizisinde yan yana kaç tane çift sayı ikilisi olduğunu bulan program
kodunu yazınız. 20-60, 24-26, 50-30, 30-40 şeklinde 4 adet olarak ekrana yazdırılacaktır*/

int main(int argc, char *argv[]) {
	int sayac,i;
	sayac=0;
	int sayilar[ ]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	for (i=0;i<13;i=i+1){
	if(sayilar[i]%2==0 && sayilar[i+1]%2==0){ 
	   printf("%d-%d \t",sayilar[i],sayilar[i+1]);
	   sayac=sayac+1;
		}
	}
	printf("\n%d adet vardir.",sayac);
	return 0;
}

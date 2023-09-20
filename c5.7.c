#include <stdio.h>
#include <stdlib.h>

/* 7. int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde çift sayýlarý tek sayýya (kendinden bir sonraki sayýya) çeviren
program kodunu yazýnýz. 20->21, 60->61 þeklinde olacaktýr.
 */

int main(int argc, char *argv[]) {
	int i;
     int sayilar[14]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
     for(i=0;i<14;i++){
	 if (sayilar[i]%2==0){
 	 	sayilar[i]=sayilar[i]+1;
	 	 }
	  printf("%d ,",sayilar[i]);
	 }
 	 
	return 0;
}

 #include <stdio.h>
#include <stdlib.h>

/*9. int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
Yukar�daki say� dizisinde kullan�c� taraf�ndan girilen say�ya denk gelen dizi i�erisindeki
say�lar�n yerlerine -1 yerle�tiren ve bu i�lemi t�m dizideki elemanlar -1 olana kadar devam
ettiren ve b�ylece ka� farkl� say� oldu�unu bulan program kodunu yaz�n�z.
�rnek: 2 girildi. Dizi: [1, 6, 5, -1, 1, 4, -1]
 4 girildi. Dizi: [1, 6, 5, -1, 1, -1, -1]
 5 girildi. Dizi: [1, 6, -1, -1, 1, -1, -1]
�. Dizi: [-1, -1, -1, -1, 1, -1, -1]
Sonu�: 5 farkl� say� bulunmaktad�r.
*/

int main(int argc, char *argv[]) {
	int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 };
	int sayi,i;
	int sayac=0;
	while(sayilar[0]!=-1 || sayilar[1]!=-1 ||  sayilar[2]!=-1 ||  sayilar[3]!=-1 || sayilar[4]!=-1 ||  sayilar[5]!=-1 ||  sayilar[6]!=-1){
	printf("diziden bir sayi seciniz:");
	scanf("%d",&sayi);
	for(i=0;i<7;i++){
		if(sayilar[i]== sayi){
			sayilar[i]=-1;
		}
		else{
			sayilar[i]=sayilar[i];
		}
	}
	
	printf("Yeni dizi:");
		for(i=0;i<7;i++){
			printf("%d \t",sayilar[i]);
			}
			printf("\n");
			sayac++;
		}
		printf("Dizide %d tane farkli sayi vardir.",sayac);
	return 0;
}

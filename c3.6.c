#include <stdio.h>
#include <stdlib.h>

/*6. Bir �irkette personelin maa�� a�a��daki �ekilde hesaplanmaktad�r. Klavyeden girilen maa� bilgisi ve �retilen par�a
say�s�na g�re toplam maa�� hesaplayan program kodunu yaz�n�z.
�retilen par�a say�s� 50-100 aras�nda ise maa��n %20
�retilen par�a say�s� 100-150 aras�nda ise maa��n %25
�retilen par�a say�s� 150-200 aras�nda ise maa��n %30 kadar ek maa� �demesi yap�lmaktad�r.
�rnek: Maa�: 3000, Par�a say�s�: 120 ise bu durumda: Toplam maa�: 3750 olacakt�r.*/


int main(int argc, char *argv[]) {
	int parca,maas;
	printf("Maas miktarini giriniz:");
	scanf("%d",&maas);
	printf("Uretilen parca sayisini giriniz:");
	scanf("%d",&parca);
	if (parca>=50 && parca<100){
	maas =maas+(maas*0.2);
	printf("Zamli maas:%d",maas);
		}
	if (parca>=100 && parca<150){
	maas =maas+(maas*0.25);
	printf("Zamli maas:%d",maas);
		}
	if (parca>=150 && parca<=200){
	maas =maas+(maas*0.3);
	printf("Zamli maas:%d",maas);
		}
	
	
	return 0;
}

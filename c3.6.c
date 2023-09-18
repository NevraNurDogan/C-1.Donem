#include <stdio.h>
#include <stdlib.h>

/*6. Bir þirkette personelin maaþý aþaðýdaki þekilde hesaplanmaktadýr. Klavyeden girilen maaþ bilgisi ve üretilen parça
sayýsýna göre toplam maaþý hesaplayan program kodunu yazýnýz.
Üretilen parça sayýsý 50-100 arasýnda ise maaþýn %20
Üretilen parça sayýsý 100-150 arasýnda ise maaþýn %25
Üretilen parça sayýsý 150-200 arasýnda ise maaþýn %30 kadar ek maaþ ödemesi yapýlmaktadýr.
Örnek: Maaþ: 3000, Parça sayýsý: 120 ise bu durumda: Toplam maaþ: 3750 olacaktýr.*/


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

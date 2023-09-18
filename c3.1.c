#include <stdio.h>
#include <stdlib.h>

/*Personel türüne göre 1 ise %50, 2 ise %30, 3 ise %20, 4 ise %10 zam yapan C kodunu switch/case yardýmýyla
yazýnýz*/
int main() {
	
	int islem,maas;
	printf("Personel maasi giriniz:");
	scanf("%d",&maas);
	printf("Personel turu seciniz:");
	scanf("%d",&islem);
	switch(islem) {
		case 1:
			printf("Zam yapilma oraniniz yuzde 50\n");
			maas=maas+(maas*50)/100;
			printf("Zamli maas:%d",maas);
			break;
    	case 2:
    		printf("Zam yapilma oraniniz yuzde 30 \n");
			maas=maas+(maas*0.3);
			printf("Zamli maas:%d",maas);
			break;
		case 3:
			printf("Zam yapilma oraniniz yuzde 20\n");
			maas=maas+(maas*0.2);
			printf("Zamli maas:%d",maas);
			break;	
		case 4:
			printf("Zam yapilma oraniniz yuzde 10\n");
			maas=maas+(maas*0.1);
			printf("Zamli maas:%d",maas);
			break;
		default :
			printf("Gecerli tur giriniz:");
			break;
	}
	return 0;
}

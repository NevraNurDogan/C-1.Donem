#include <stdio.h>
#include <stdlib.h>

/* 7. Klavyeden girilen 3 tam say� de�erine g�re ��genin �e�idini (E�kenar, �kizkenar, �e�itkenar) ekrana yazan program
kodunu yaz�n�z. */

int main(int argc, char *argv[]) {
	int k1,k2,k3;
	printf("Ucgenin 1. kenarini giriniz:");
	scanf("%d",&k1);
	printf("Ucgenin 2. kenarini giriniz:");
	scanf("%d",&k2);
	printf("Ucgenin 3. kenarini giriniz:");
	scanf("%d",&k3);
	if (k1==k2 && k2==k3){
		printf("Eskenar ucgendir:");
	}
	else if (k1==k2 && k1!=k3 ||k1==k3 && k1!=k2 || k2==k3 && k2!=k1){
	printf ("Ucken ikizkenar uckendir");
	}
	if  (k1!=k2 && k2!=k3 && k3!=k1){
		printf("Ucken cesitkenardir");
	}
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N say�s�n�n fakt�riyelini hesaplayan program�
int main() {
	
	int n,i;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	int faktor=1;
	for (i=1;i<=n;i++)
	{faktor=faktor*i;
	}
	printf("%d!=%d",n,faktor);
	
	return 0;
}

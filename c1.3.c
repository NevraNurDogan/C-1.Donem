#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir N sayısının faktöriyelini hesaplayan programı
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

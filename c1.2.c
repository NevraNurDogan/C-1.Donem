#include <stdio.h>
#include <stdlib.h>

// 1 ile 1000 arasýndaki tek sayýlar toplamý

int main(int argc, char *argv[]) {
	
	int i,toplam;
	for (i=1;i<=1000;i++)
	{ if (i%2!=0)
	{ toplam=toplam+i;
	}
	}
	 printf("Toplam:%d",toplam);
	return 0;
}

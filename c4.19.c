#include <stdio.h>
#include <stdlib.h>

/* 19. 10000 say�s�ndan k���k en b�y�k ve rakamlar� birbirinden farkl� say�y� bulan program 
kodunu yaz�n�z. Sonuc: 9876 olacakt�r */

int main(int argc, char *argv[]) {
	int i,j,a[10];
	j=0;
	for(i=10000;i>0;i--){
		int temp = i;
        j = 0;
		while(temp!=0){
			a[j]=temp%10;
			temp/=10;
			j++;
		}
	if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3]){
		printf("%d",i);
		break;
	}
	else{
		printf("");
		}
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* 10. Girilen (s�ral�) 3 say�n�n birbirleri aras�ndaki farka g�re 4. Say�y� bulan program� yaz�n�z.
�rnek: 1. Say� 3, 2. Say� 7, 3. Say� 13 ise 4. Say�: 21 olmal�d�r. Say�lar 4-6-8 olarak artm��t�r. */

int main(int argc, char *argv[]) {  
	int s1 ,s2,s3,s4;
	printf ("1. sayiyi girini:");
	scanf("%d",&s1);
	printf ("2. sayiyi girini:");
	scanf("%d",&s2);
	printf ("3. sayiyi girini:");
	scanf("%d",&s3);
	int f1=s1-s2;
	int f2=s2-s3;
	if (f1<0){
		f1*=-1;
	}
	if (f2<0){
		f2*=-1;
	}
	if (f1==f2){
		s4=(s3+(f1));
		printf("**4. sayi %d'dir.",s4);
	}
	else if (f1!=f2 && f2<f1){
    	s4=(s3-(f2+(f2-f1)));
		printf("-4. sayi %d'dir.",s4);
	}
	
	else if (f1!=f2 && f2>f1){
		s4=(s3+(f2+(f2-f1)));
		printf("4. sayi %d'dir.",s4);
	}
	
	else{
	printf ("Bu bir oruntu degildir.");
	}

	return 0;
}

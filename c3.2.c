#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen Vize1, Vize2 ve Final notlar�na g�re ��rencinin y�l sonu notunu hesaplayan 50 puandan fazla ise
�GE�Tݔ, k���k ise Vize1, Vize2 ve B�t�nleme notlar�na g�re tekrar y�l sonu notunu hesaplayan 50 puandan az ise
�KALDI�, fazla ise �GE�Tݔ olarak ekrana yazan C program�n� yaz�n�z. Vize1: %30, Vize2: %30, Final: %40 y�l sonuna
etki edecek �ekilde hesaplanacakt�r*/

int main() {
	float v1,v2,f,ort;
	printf("1. vize notunu giriniz:");
	scanf("%f",&v1);
	printf("2. vize notunu giriniz:");
	scanf("%f",&v2);
	printf("Final notunu giriniz:");
	scanf("%f",&f);
	ort=v1*0.3+v2*0.3+f*0.4;
	printf("Ortalamaniz:%f\n",ort);
	if(ort>=50){printf("GECTI");}
	
	else{printf("KALDI\n");
	float but,ort2;
	printf("Butunleme notunu giriniz:");
	scanf("%f",&but);
	ort2=v1*0.3+v2*0.3+but*0.4;
	printf("Ortalamaniz:%f\n",ort2);
	
	if (ort2>=50)
	{printf("GECTI");
	}
	else {printf("KALDI");
	}
	
	}
	
	return 0;
}

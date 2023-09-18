#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen 4 sayýdan hangi sayýlarýn ortalamadan büyük/eþit/küçük olduðunu yazan program 
yazýnýz. Örnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan 10 ve 12 büyük, 3 ve 5 küçük olarak yazacaktýr.*/


int main(int argc, char *argv[]) {
	float s1,s2,s3,s4,ort;
	printf("Bir sayi giriniz:\n");
	scanf("%f",&s1);
	printf("Bir sayi giriniz:\n");
	scanf("%f",&s2);
	printf("Bir sayi giriniz:\n");
	scanf("%f",&s3);
	printf("Bir sayi giriniz:\n");
	scanf("%f",&s4);
	ort=(s1+s2+s3+s4)/4;
	printf("Ortalama:%f\n",ort);
	
	if (s1<ort){printf("%f ortalamadan kucuk.\n",s1);	}
	else if (s1>ort){printf("%f ortalamadan buyuk.\n",s1);	}
	else {printf("%f ortalamaya esit.\n",s1);	}
	
	if (s2<ort){printf("%f ortalamadan kucuk.\n",s2);	}
	else if (s2>ort){printf("%f ortalamadan buyuk.\n",s2);	}
	else {printf("%f ortalamaya esit.\n",s2);	}
	
	if (s3<ort){printf("%f ortalamadan kucuk.\n",s3);	}
	else if (s3>ort){printf("%f ortalamadan buyuk.\n",s3);	}
	else {printf("%f ortalamaya esit.\n",s3);	}
	
	if (s4<ort){printf("%f ortalamadan kucuk.\n",s4);	}
	else if (s4>ort){printf("%f ortalamadan buyuk.\n",s4);	}
	else {printf("%f ortalamaya esit.\n ",s4);	}
	return 0;
}

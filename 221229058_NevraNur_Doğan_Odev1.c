#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    int mod=10, ogrencino=221229058 ;
    printf("Ogrenci No:221229058\n");
    
    int sayi1;
    sayi1=ogrencino % mod;
	ogrencino=ogrencino/10;

    int sayi2;
    sayi2=ogrencino % mod;
    ogrencino=ogrencino/10;

     int sayi3;
    sayi3=ogrencino % mod;
    ogrencino=ogrencino/10;

    int sayi4;
    sayi4=ogrencino % mod;
    ogrencino=ogrencino/10;
    
    int sayi5;
    sayi5=ogrencino % mod;
    ogrencino=ogrencino/10;
    
    int sayi6;
    sayi6=ogrencino % mod;
    ogrencino=ogrencino/10;
    
    int sayi7;
    sayi7=ogrencino % mod;
    ogrencino=ogrencino/10;
    
    int Toplam;
    Toplam=sayi1+sayi2+sayi3+sayi4+sayi5+sayi6+sayi7;
    printf("Toplam:%d",Toplam);
    
    float x=1,y=0;
    0.1<=x*x*x-0.1*y*y-Toplam/5<=0.2;
    float sonuc, a=x*x*x,b=y*y;
    sonuc=(a-(0.1*b)-Toplam);
    sonuc=sonuc/5;
    printf("\n x=1 icin (1-27)/5:%f",sonuc);
     
    
   x=x+1;//x deðerini artýrýnýz.
    float sonuc1,c=x*x*x,d=y*y;
    sonuc1=(c-(0.1*d)-Toplam);
    sonuc1=sonuc1/5;
    printf("\n x=2 icin (8-27)/5:%f",sonuc1);
    
    x=x+1;//x deðerini artýrýnýz.
     float sonuc2,e=x*x*x,f=y*y;
    sonuc2=(e-(0.1*f)-Toplam);
    sonuc2=sonuc2/5;
    printf("\n x=3 icin (27-27)/5:%f",sonuc2);
    
     x=x+1;//x deðerini artýrýnýz.
     float sonuc3,g=x*x*x,h=y*y;
    sonuc3=(g-(0.1*h)-Toplam);
    sonuc3=sonuc3/5;
    printf("\n x=4 icin (64-27)/5:%f",sonuc3);
    printf("\n x=4 oldugunda elde edilen sonuc araligindan cok uzaklastigindan x=3 olacaktir.");
    
    
    x=3;//x artýk 3 olarak denklemde kullanýlacaktýr.
    y=y+1;//y deðerini artýrýnýz.
    float sonuc4,i=x*x*x,j=y*y;
    sonuc4=(i-(0.1*j)-Toplam);
    sonuc4=sonuc4/5;
    printf("\n y=1 icin (27-0.1-27)/5:%f",sonuc4);
    
    y=y+1;//y deðerini artýrýnýz.
    float sonuc5,k=x*x*x,l=y*y;
    sonuc5=(k-(0.1*l)-Toplam);
    sonuc5=sonuc4/5;
    printf("\n y=2 icin (27-0.4-27)/5:%f",sonuc5);
    
    y=y+1;//y deðerini artýrýnýz.
    float sonuc6,m=x*x*x,n=y*y;
    sonuc6=(m-(0.1*n)-Toplam);
    sonuc6=sonuc6/5;
    printf("\n y=3 icin (27-0.9-27)/5:%f",sonuc6);

    printf("\n y=2 ve y=3 oldugunda elde edilen sonuc araligindan cok uzaklastigindan y=1 olacaktir.");
    printf("\n Sonuc olarak x=3,y=1 Toplam 27 durumunda denklem saglanmistir.");
}

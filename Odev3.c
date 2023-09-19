#include <stdio.h>
#include <stdlib.h>

/* Ödev 3 */

int main() {
	int sayi;
    printf("4 basamakli pozitif bir sayi giriniz:");
    scanf("%d",&sayi);
    
    int a=sayi/1000;
    printf("\nBasamaklar:%d",a );
    
	 int b=sayi/100-a*10;
	 printf(",%d",b );
	
	int c=sayi/10-a*100-b*10;
	 printf(",%d",c );
	
	int d=sayi-a*1000-b*100-c*10;
	 printf(",%d ",d );
	 
	 int e,e1,e2;
	 e1=a*a+b*b;
	 e2=c*c+d*d;
	 e= ((a*a+b*b)-(c*c+d*d)); 
	 if (e<0){e=e*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",a,a,b,b,c,c,d,d,e1,e2,e);
	 
	  
	int f,f1,f2;
	f1=a*a+b*b;
	f2=d*d+c*c;
	 f= ((a*a+b*b)-(d*d+c*c));
	 if (f<0){f=f*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",a,a,b,b,d,d,c,c,f1,f2,f);
	 
	 int g,g1,g2;
	 g1=a*a+c*c;
	 g2=b*b+d*d;
	 g= ((a*a+c*c)-(b*b+d*d));
	 if (g<0){g=g*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",a,a,c,c,b,b,d,d,g1,g2,g);
	 
	 int h,h1,h2;
	 h1=a*a+c*c;
	 h2=d*d+b*b;
	 h= ((a*a+c*c)-(d*d+b*b));
	 if (h<0){h=h*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",a,a,c,c,d,d,b,b,h1,h2,h);
	 
	 int i,i1,i2;
	 i1=a*a+d*d;
	 i2=b*b+c*c;
	 i= ((a*a+d*d)-(b*b+c*c));
	 if (i<0){i=i*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",a,a,d,d,b,b,c,c,i1,i2,i);
	 
	 int j,j1,j2;
	 j1=a*a+d*d;
	 j2=c*c+b*b;
	 j= ((a*a+d*d)-(c*c+b*b));
	 if (j<0){j=j*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",a,a,d,d,c,c,b,b,j1,j2,j);
	 
	 int k,k1,k2;
	 k1=b*b+a*a;
	 k2=c*c+d*d;
	 k= ((b*b+a*a)-(c*c+d*d));
	 if (k<0){k=k*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",b,b,a,a,c,c,d,d,k1,k2,k);
	
	int l,l1,l2;
	l1=b*b+a*a;
	l2=d*d+c*c;
	 l= ((b*b+a*a)-(d*d+c*c));
	 if (l<0){l=l*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",b,b,a,a,d,d,c,c,l1,l2,l);
	
	int m,m1,m2;
	m1=b*b+c*c;
	m2=a*a+d*d;
	 m= ((b*b+c*c)-(a*a+d*d));
	 if (m<0){m=m*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",b,b,c,c,a,a,d,d,m1,m2,m );
	
	int n,n1,n2;
	n1=b*b+c*c;
	n2=d*d+a*a;
	 n= ((b*b+c*c)-(d*d+a*a));
	 if (n<0){n=n*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",b,b,c,c,d,d,a,a,n1,n2,n);
	
	int o,o1,o2;
	o1=b*b+d*d;
	o2=a*a+c*c;
	 o= ((b*b+d*d)-(a*a+c*c));
	 if (o<0){o=o*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",b,b,d,d,a,a,c,c,o1,o2,o);
	 
	 int p,p1,p2;
	 p1=b*b+d*d;
	 p2=c*c+a*a;
	 p= ((b*b+d*d)-(c*c+a*a));
	 if (p<0){p=p*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",b,b,d,d,c,c,a,a,p1,p2,p);
	
	int r,r1,r2;
	r1=c*c+a*a;
	r2=b*b+d*d;
	 r= ((c*c+a*a)-(b*b+d*d));
	 if (r<0){r=r*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",c,c,a,a,b,b,d,d,r1,r2,r);
	 
	 int s,s1,s2;
	 s1=c*c+a*a;
	 s2=d*d+b*b;
	 s= ((c*c+a*a)-(d*d+b*b));
	 if (s<0){s=s*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",c,c,a,a,d,d,b,b,s1,s2,s);
	 
	 int t,t1,t2;
	 t1=c*c+b*b;
	 t2=a*a+d*d;
	 t= ((c*c+b*b)-(a*a+d*d));
	 if (t<0){t=t*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",c,c,b,b,a,a,d,d,t1,t2,t);

    int u,u1,u2;
    u1=c*c+b*b;
    u2=d*d+a*a;
	 u= ((c*c+b*b)-(d*d+a*a));
	 if (u<0){u=u*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",c,c,b,b,d,d,a,a,u1,u2,u);
    
    int v,v1,v2;
    v1=c*c+d*d;
    v2=a*a+b*b;
	 v=((c*c+d*d)-(a*a+b*b));
	if (v<0){v=v*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",c,c,d,d,a,a,b,b,v1,v2,v);
	  
	int y,y1,y2;
	y1=c*c+d*d;
	y2=b*b+a*a;
	 y= ((c*c+d*d)-(b*b+a*a));
	 if (y<0){y=y*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",c,c,d,d,b,b,a,a,y1,y2,y);
	 
	int z,z1,z2;
	z1=d*d+a*a;
	z2=b*b+c*c;
	 z= ((d*d+a*a)-(b*b+c*c));
	 if (z<0){z=z*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",d,d,a,a,b,b,c,c,z1,z2,z);
	 
	int x,x1,x2;
	x1=d*d+a*a;
	x2=c*c+b*b;
	 x= ((d*d+a*a)-(c*c+b*b));
	 if (x<0){x=x*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",d,d,a,a,c,c,b,b,x1,x2,x);
	 
	 int w,w1,w2;
	 w1=d*d+b*b;
	 w2=c*c+a*a;
	 w= ((d*d+b*b)-(c*c+a*a));
	 if (w<0){w=w*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",d,d,b,b,c,c,a,a,w1,w2,w );
	 
	 int A,A1,A2;
	 A1=d*d+b*b;
	 A2=a*a+c*c;
	 A= ((d*d+b*b)-(a*a+c*c));
	 if (A<0){A=A*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",d,d,b,b,a,a,c,c,A1,A2,A);
	 
	 int B,B1,B2;
	 B1=d*d+c*c;
	 B2=a*a+b*b;
	 B=((d*d+c*c)-(a*a+b*b));
	 if (B<0){B=B*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",d,d,c,c,a,a,b,b,B1,B2,B);
	 
	 int C,C1,C2;
	 C1=d*d+c*c;
	 C2=b*b+a*a;
	 C=((d*d+c*c)-(b*b+a*a));
	 if (C<0){C=C*(-1) ;}
	 printf("\n |(%d*%d+%d*%d)-(%d*%d+%d*%d)|=|%d-%d|=%d",d,d,c,c,b,b,a,a,C1,C2,C);
	 
	 int enbuyuk;
	 enbuyuk=e;
	if (enbuyuk<f){enbuyuk=f; }
	if (enbuyuk<g){enbuyuk=g; }
	if (enbuyuk<h){enbuyuk=h; }
	if (enbuyuk<i){enbuyuk=i; }
	if (enbuyuk<j){enbuyuk=j; }
	if (enbuyuk<k){enbuyuk=k; }
	if (enbuyuk<l){enbuyuk=l; }
	if (enbuyuk<m){enbuyuk=m; }
	if (enbuyuk<n){enbuyuk=n; }
	if (enbuyuk<o){enbuyuk=o; }
	if (enbuyuk<p){enbuyuk=p; }
	if (enbuyuk<r){enbuyuk=r; }
	if (enbuyuk<s){enbuyuk=s; }
	if (enbuyuk<t){enbuyuk=t; } 	
	if (enbuyuk<u){enbuyuk=u; }
	if (enbuyuk<v){enbuyuk=v; }
	if (enbuyuk<y){enbuyuk=y; }
	if (enbuyuk<z){enbuyuk=z; }
	if (enbuyuk<x){enbuyuk=x; }
	if (enbuyuk<w){enbuyuk=w; }
	if (enbuyuk<A){enbuyuk=A; }
	if (enbuyuk<B){enbuyuk=B; }
	if (enbuyuk<C){enbuyuk=C; }
	
	

int enkucuk;
	 enkucuk=e;
	if (enkucuk>f){enkucuk>=f; }
	if (enkucuk>g){enkucuk=g; }
	if (enkucuk>h){enkucuk=h; }
	if (enkucuk>i){enkucuk=i; }
	if (enkucuk>j){enkucuk=j; }
	if (enkucuk>k){enkucuk=k; }
	if (enkucuk>l){enkucuk=l; }
	if (enkucuk>m){enkucuk=m; }
	if (enkucuk>n){enkucuk=n; }
	if (enkucuk>o){enkucuk=o; }
	if (enkucuk>p){enkucuk=p; }
	if (enkucuk>r){enkucuk=r; }
	if (enkucuk>s){enkucuk=s; }
	if (enkucuk>t){enkucuk=t; } 	
	if (enkucuk>u){enkucuk=u; }
	if (enkucuk>v){enkucuk=v; }
	if (enkucuk>y){enkucuk=y; }
	if (enkucuk>z){enkucuk=z; }
	if (enkucuk>x){enkucuk=x; }
	if (enkucuk>w){enkucuk=w; }
	if (enkucuk>A){enkucuk=A; }
	if (enkucuk>B){enkucuk=B; }
	if (enkucuk>C){enkucuk=C; }
	

	
	printf("\n %d,%d ve %d,%d =>Sonuc:%d",a,b,c,d,e);
	printf("\n %d,%d ve %d,%d =>Sonuc:%d",a,c,b,d,g);
	printf("\n %d,%d ve %d,%d =>Sonuc:%d",a,d,b,c,i);
	
	
	if (enbuyuk==e){printf("\n Maksimum:%d,%d ve %d,%d =>Sonuc:%d",a,b,c,d,enbuyuk);}
	if (enbuyuk==g){printf("\n Maksimum:%d,%d ve %d,%d =>Sonuc:%d",a,c,b,d,enbuyuk);}
	if (enbuyuk==i){printf("\n Maksimum:%d,%d ve %d,%d =>Sonuc:%d",a,d,b,c,enbuyuk);}
	
	
	if (enkucuk==e){printf("\n Minimum:%d,%d ve %d,%d =>Sonuc:%d",a,b,c,d,enkucuk);}
	if (enkucuk==g){printf("\n Minimum:%d,%d ve %d,%d =>Sonuc:%d",a,c,b,d,enkucuk);}
	if (enkucuk==i){printf("\n Minimum:%d,%d ve %d,%d =>Sonuc:%d",a,d,b,c,enkucuk);}
	
   
	return 0;
}

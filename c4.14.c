#include <stdio.h>
#include <stdlib.h>

/*14. Aþaðýdaki þekli * kullanarak boþ üçgen elde ediniz. Her bir satýrda sýrasýyla; 1, 3, 5, 7 ve 9 boþluk
bulunmaktadýr. 14. Sorudaki üçgenin içi boþ olarak düþünülmektedir.
     *
   *   *
  *     *
 *       *
*         *
*/

int main(int argc, char *argv[]) {
	int i,k,s,bosluk=4,ara=0;
	for(i=1;i<6;i++){
	for (k=0;k<bosluk;k++){
	printf(" ");
	}
	bosluk--;
	if (i<7){
	printf("*");
	}
	for (s=1;s<ara;s++){
	printf(" ");
	}
    ara+=2;
	if (i<7 && i>1)	{
	printf("*");
		}
	printf("\n");
	
	
	
}
	return 0;
}

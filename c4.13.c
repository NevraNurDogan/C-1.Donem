#include <stdio.h>
#include <stdlib.h>

/*13. A�a��daki �ekli * kullanarak ��gen elde ediniz.
    *
   ***
  *****
 *******
*********
 */

int main() {
	int i,j ;
	for (i=1;i<=9;i+=2){
		for (j=1;j<=9-i;j++){
			printf(" ");
				}
		for (j=1;j<=i;j++){	
			printf(" *");	
		}
			printf("\n");
	}
	
	
	return 0;
}

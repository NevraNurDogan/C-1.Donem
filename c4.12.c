#include <stdio.h>
#include <stdlib.h>

/*12. Aþaðýdaki þekli * kullanarak elde ediniz.
*
***
*****
*******
*********

*/
int main() {
    int i, j, n;

    printf("Satir sayisini girin: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


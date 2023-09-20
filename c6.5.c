#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 5. N adet aralarýnda en fazla 0.1 kadar fark olan [0.2- 1.2] arasýnda rastgele sayý üretiniz. */
//??

int main() {
    int n, i;
    float min_value = 0.2;
    float max_value = 1.2;
    
    printf("Uretilecek sayi adedini giriniz: ");
    scanf("%d", &n);
    
    srand(time(NULL));
    
    printf("Üretilen sayýlar:\n");
    
    for (i = 0; i < n; i++) {
        float random_value = (float)rand() / RAND_MAX; // [0, 1] aralýðýnda rastgele ondalýklý sayý üret
        float scaled_value = min_value + (random_value * (max_value - min_value)); // [0.2, 1.2] aralýðýna ölçekle
        printf("%d. sayý: %.2f\n", i + 1, scaled_value);
    }
    
    return 0;
}


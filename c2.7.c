#include <stdio.h>

int main() {
    double R1, R2, R3, Requivalent;
    printf("R1 degerini girin (ohm): ");
    scanf("%lf", &R1);

    printf("R2 degerini girin (ohm): ");
    scanf("%lf", &R2);

    printf("R3 degerini girin (ohm): ");
    scanf("%lf", &R3);

    Requivalent = 1 / (1/R1 + 1/R2 + 1/R3);

    printf("Esdeger direnc (Res) = %.2lf ohm\n", Requivalent);

    return 0;
}


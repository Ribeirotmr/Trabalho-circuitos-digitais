#include <stdio.h>
#include <math.h>

void decimalToBinaryFraction(double decimal) {
    // Parte inteira do número decimal
    int intPart = (int)decimal;

    // Parte fracionária do número decimal
    double fracPart = decimal - intPart;

    // Converter a parte inteira para binário
    printf("Parte inteira em binario: ");
    while (intPart > 0) {
        printf("%d", intPart % 2);
        intPart /= 2;
    }
    printf("\n");

    // Converter a parte fracionária para binário
    printf("Parte fracionaria em binario: ");
    for (int i = 0; i < 10; ++i) {
        fracPart *= 2;
        int bit = (int)fracPart;
        printf("%d", bit);
        fracPart -= bit;
    }
    printf("\n");
}

int main() {
    double numDecimal;
    printf("Digite um numero decimal fracionario: ");
    scanf("%lf", &numDecimal);

    decimalToBinaryFraction(numDecimal);

    return 0;
}

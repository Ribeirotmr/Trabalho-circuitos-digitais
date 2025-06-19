#include <stdio.h>
#include <math.h>
#include <string.h>

double binaryToDecimal(char binary[], int len) {
    char *point = strchr(binary, '.');
    if (point == NULL) {
        // Ponto decimal não encontrado, consideramos a parte fracionária como zero
        point = binary + len;
    }

    double intDecimal = 0, fracDecimal = 0, twos = 1;

    // Converte a parte inteira do número binário para decimal
    for (int i = point - binary - 1; i >= 0; --i) {
        intDecimal += (binary[i] - '0') * twos;
        twos *= 2;
    }

    twos = 0.5; // Começamos com 2 elevado à potência -1

    // Converte a parte fracionária do número binário para decimal
    for (int i = point - binary + 1; i < len; ++i) {
        fracDecimal += (binary[i] - '0') * twos;
        twos /= 2.0;
    }

    return intDecimal + fracDecimal;
}

int main() {
    char n[100]; // Tamanho máximo da entrada
    printf("Digite um número binário fracionário (por exemplo, 101010.001): ");
    scanf("%s", n);

    printf("O número em decimal é: %.6f\n", binaryToDecimal(n, strlen(n)));

    return 0;
}

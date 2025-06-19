#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

/**
 * Converte um número decimal para representação binária.
 *
 * @param dec O número decimal a ser convertido.
 */
void dec2bin(int dec);

/**
 * A função principal que recebe a entrada do usuário e chama a função dec2bin.
 *
 * @return 0 em caso de execução bem-sucedida.
 */
int main(){
    int dec;
    printf("Digite um número inteiro: ");
    scanf("%i",&dec);
    printf("Resultado: ");
    dec2bin(dec);
}

/**
 * Função recursiva para converter um número decimal em representação binária.
 *
 * @param dec O número decimal a ser convertido.
 */
void dec2bin(int dec){
    int num;
    if(dec/2==0){
        printf("%i",dec%2);
    }
    else{
        num=dec/2;	
        dec2bin(num);
        printf("%i",dec%2);
    }
}


	


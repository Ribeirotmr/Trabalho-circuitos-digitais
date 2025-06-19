// Solução utilizando string para converter um número binário em decimal:

#include <stdio.h>
#include <math.h>
#include <string.h>

//Constante para definir o tamanho do vetor:
#define TAM_VETOR 32

void main() {

	int tamNumBinario;
    long int numDecimal = 0;
    
    //Cria e inicializa um vetor com 32 posições:
	char numBinario[TAM_VETOR];
    printf("Digite o número em binário (máximo de 32 bits): "); //
	scanf("%s", numBinario);    

	//verifica quantos dígitos tem o número binário recebido;
	tamNumBinario = strlen(numBinario);
	
	//Este laço verifica os dígitos da entrada da direita para a esquerda, ou seja, começa na posição do último elemento e decrementa até que chegar no índice zero:	
	for (int iteradorFor = tamNumBinario-1; iteradorFor >= 0; iteradorFor--) {
	
		/* Se o número na posição atual for igual a 1, o número 2 (da base) será elevado ao expoente
		de valor igual a posição e será somado com os resultados dessa mesma operação realizada anteriormente: */
		if (numBinario[iteradorFor] == '1') {
			numDecimal += pow(2,tamNumBinario-1-iteradorFor);
		}
	}
	
	//Imprime o valor do número de entrada na base decimal:
	printf("Esse número corresponde a %ld na base Decimal!", numDecimal);
}
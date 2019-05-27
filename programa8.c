// Este programa apresenta exemplos básicos do uso de 
// estruturas de repetição (laços) na Linguagem C.

// A linguagem C possui as seguintes estruturas de
// repetição: while, do-while e for.
// O uso destas estruturas será explanado no programa
// a seguir.

#include <stdio.h>

int main()
{
	int numero;

	printf("Informe um número maior que zero: ");
	scanf("%d", &numero);

	// a linha de código abaixo realizará um teste. Enquanto
	// ("while") o resultado do teste condicional for verdadeiro
	// o bloco de código aninhado a estrutura while será executado.
	// Uma vez que o retorno do teste seja falso o programa continuará
	// o seu fluxo normal.0
	while (numero > 0)
	{
		printf("Valor atual: %d.\n", numero);
		--numero;
	}
	
	return (0);
}
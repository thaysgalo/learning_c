
#include <stdio.h>

int main()
{
	int numero;

	printf("Informe um número maior que zero: ");
	scanf("%d", &numero);

	// A linha de código abaixo executará todas as instruções aninhadas
	// ao "do". Ao final, será realizado um teste condicional em "while".
	// Caso o teste seja verdadeiro, todas as instruções aninhadas ao
	// "do" serão executadas novamente. E assim sucessivamente até que 
	// o teste seja falso.
	do
	{
		printf("Valor atual: %d.\n", numero);
		--numero;
	}
	while (numero > 0);

	return (0);
}
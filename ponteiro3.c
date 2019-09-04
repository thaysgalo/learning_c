#include <stdio.h>

int main()
{
	int valor1;
	int valor2;
	int *ponteiro;

	ponteiro = &valor1;

	printf("Valor: %d\tEndereço: %p\n", valor1, &valor1);
	printf("Valor: %d\tEndereço: %p\n", valor2, &valor2);
	printf("Valor: %p\tEndereço: %p\tValor apontado: %d\n", ponteiro, &ponteiro, *ponteiro);

	++ponteiro;

	printf("\nValor: %d\tEndereço: %p\n", valor1, &valor1);
	printf("Valor: %d\tEndereço: %p\n", valor2, &valor2);
	printf("Valor: %p\tEndereço: %p\tValor apontado: %d\n", ponteiro, &ponteiro, *ponteiro);


	return (0);
}
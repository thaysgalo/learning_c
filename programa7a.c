
#include <stdio.h>

int main()
{
	int divisor, dividendo;

	printf("Informe os valores de divisor e dividendo: ");
	scanf("%d %d", &divisor, &dividendo);

	printf("O resultado é: %d.\n", divisor / dividendo);

	// Neste caso, há apenas um bloco de código aninhado
	// para a condição verdadeira, verificada em "if".
	// Nota-se que há um tratamento específico somente
	// quando a condição é verdadeiramente atendida.
	// Caso contrário, o programa continua seu fluxo.
	if (divisor % dividendo == 0)
		printf("Divisão inteira.\n");

	printf("Qué cujim.\n");

	return (0);
}
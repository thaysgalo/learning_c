#include <stdio.h>

int main()
{
	int numero1;
	int numero2;
	int numero3;

	printf("Informe o primeiro número: ");
	scanf("%d", &numero1);
	printf("Informe o segundo número: ");
	scanf("%d", &numero2);
	printf("Informe o terceiro número: ");
	scanf("%d", &numero3);

	if (numero1 > numero2 && numero1 > numero3)
		printf("O maior número é: %d\n", numero1);
	else if (numero2 > numero1 && numero2 > numero3)
		printf("O maior número é: %d\n", numero2);
	else if (numero3 > numero1 && numero3 > numero2)
		printf("O maior número é: %d\n", numero3);

	return (0);
}
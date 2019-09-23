#include <stdio.h>

int main()
{
	int numero;
	int i;
	int contador = 0;

	printf("Informe um número:\n");
	scanf("%d", &numero);

	for (i = numero; i >= 1; i--)
	{
		if (numero % i == 0)
			contador++;
	}

	if (contador > 2)
		printf("O número não é primo.\n");
	else
		printf("O número é primo.\n");

	return (0);
}
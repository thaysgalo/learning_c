#include <stdio.h>

int main()
{
	int numero;
	int controle;

	printf("Informe o valor a ser multiplicado: \n");
	scanf("%d", &numero);

	for (controle = 0; controle <= 10; controle++)
	{
		printf("%d x %d = %d\n", numero, controle, numero * controle);
	}
	
	return (0);
}

// n = 7

// 7 x 1 = 7
// 7 x 2 = 14
// .
// .
// .
// 7 x 10 = 70
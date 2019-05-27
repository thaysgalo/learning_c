#include <stdio.h>

int main()
{
	int numero1;
	int numero2;

	printf("Informe o primeiro valor:\n");
	scanf("%d", &numero1);
	printf("Informe o segundo valor:\n");
	scanf("%d", &numero2);

	if(numero1 > 0 && numero2 > 0)
	{
		if(numero1 % 2 == 0 && numero2 % 2 == 0)
			printf("Os dois números são pares.\n");
		else if (numero1 % 2 == 1 && numero2 % 2 == 1)
			printf("Os dois números são ímpares.\n");
		else if (numero1 % 2 == 0 && numero2 % 2 == 1 || numero1 % 2 == 1 && numero2 % 2 == 0)
			printf("Um par e um ímpar.\n");
	}
	
	else
		printf("Existe pelo menos um número 0 ou negativo!\n");

	
	return (0);
}
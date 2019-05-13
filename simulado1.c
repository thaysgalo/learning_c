#include <stdio.h>

int main()
{ 
	int valor1;
	int valor2;

	printf("%s", "Informe o primeiro valor:");
	scanf("%d", &valor1);
	printf("%s", "Informe o segundo valor:");
	scanf("%d", &valor2);

	if (valor1 > 0 && valor2 > 0)
	{
		if(valor1 % 2 == 0 && valor2 % 2 == 0)
			printf("Os dois números são pares.\n");
		else if (valor1 % 2 == 1 && valor2 % 2 == 1)
			printf("Os dois números são ímpares.\n");
		else
			printf("Existe um número par e um número ímpar.\n");
	}
	else
	{
		printf("Existe pelo menos um número 0 ou negativo.\n");
	} 


	return (0);
}
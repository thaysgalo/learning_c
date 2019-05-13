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
			printf("%s", "Os dois números são pares.\n");
		else if (valor1 % 2 == 1 && valor2 % 2 == 1)
			printf("%s", "Os dois números são ímpares.");
	}
	else
	{
		printf("%s", "Existe pelo menos um número 0 ou negativo.");
	} 


	return (0);
}
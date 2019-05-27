
#include <stdio.h>

int main()
{
	int numero;

	// Acerca da instrução "for", apresentada na linha de código abaixo, 
	// para o seu parâmetro são informados três instruções, conforme ilustrado
	// abaixo:
	//
	// for (inicialização de variáveis; teste condicional; manipulação de variáveis (quaisquer operações matemáticas))
	for (numero = 50; numero > 0; --numero)
	{
		printf("Valor atual: %i.\n", numero);
	}

	// int numero1, numero2;

	// for (numero1 = 3; numero1 > 0; --numero1)
	// {
	// 	for (numero2 = 5; numero2 > 0; --numero2)
	// 	{
	// 		printf("\tValor interno (numero2): %i.\n", numero2);
	// 	}
	// 	printf("Valor externo (numero1): %i.\n", numero1);
	// }

	return (0);
}
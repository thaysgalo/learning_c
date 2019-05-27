#include <stdio.h>

int main()
{
	int numero;
	int divisor;
	int contador = 0;
	char resposta;

	

	do
	{
		printf("Informe um valor:\n");
		scanf("%d", &numero);


		for (divisor = numero; divisor > 0; divisor--)
		{
			if(numero % divisor == 0)
				contador++;
		}

		if(contador > 2)
			printf("O número não é primo.\n");
		else
			printf("O número é primo.\a\n");

		printf("Deseja continuar? Responda com S ou N\n");
		scanf(" %c", &resposta);	
	}
	while (resposta == 'S' || resposta == 's');
	
		
	
	


		





	return (0);
}
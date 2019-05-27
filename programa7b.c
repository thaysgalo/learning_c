
#include <stdio.h>


int main()
{
	int anos_de_casados;

	printf("Quantos anos de casado você tem?\n");
	scanf("%i", &anos_de_casados);

	// A palavra reservada "switch" realiza o
	// chaveamento do valor que está sendo informado
	// em seu parâmetro.
	// Assim, para cada valor específico armazenado
	// na variável a ser chaveada, há um determinado
	// caso ("case") que realizará o tratamento, ou seja,
	// caso o valor armazenado na variável esteja previsto
	// em algum dos casos, haverá um tratamento particular
	// para aquele caso. Caso não haja, é possível (não 
	// obrigatório) utilizar a palavra reservada "default"
	// para tratar valor não especificados nos casos.
	switch (anos_de_casados)
	{
		case 1: 
		printf("Bodas de papel!\n");
		break;
		case 25:
		printf("Bodas de prata!\n");
		break;
		case 80:
		printf("Bodas de carvalho!\n");
		break;
		default:
		printf("Não há classificação.\n");
	}

	printf("Se fodeu!\n");

	return (0);
}
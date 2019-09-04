#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void obter_texto(char *texto, int *quantidade_caracteres)
{
	char letra;

	while ((letra = getchar()) != '\n')
	{
		texto[(*quantidade_caracteres) - 1] = letra;
		texto = (char *) realloc(texto, ++(*quantidade_caracteres) * sizeof(char));
	}
}

int obter_quantidade_repeticoes(char *texto, int quantidade_caracteres, char letra_desejada)
{
	int i, quantidade_repeticoes;

	for (quantidade_repeticoes = i = 0; i < quantidade_caracteres; ++i)
		if (texto[i] == letra_desejada)
			quantidade_repeticoes++;

	return (quantidade_repeticoes);
}

int main()
{
	char *texto, letra_desejada;
	int i, quantidade_repeticoes;

	i = 0;
	texto = (char *) calloc(++i, sizeof(char));

	obter_texto(texto, &i);
	printf("Escolha o caracter desejado: ");
	scanf(" %c", &letra_desejada);
	quantidade_repeticoes = obter_quantidade_repeticoes(texto, i, letra_desejada);
	printf("Total de repetições para '%c': %i\n", letra_desejada, quantidade_repeticoes);

	free(texto);

	return (0);
}
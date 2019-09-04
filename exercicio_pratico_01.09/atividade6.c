#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void obter_texto(char **texto, int *quantidade_caracteres)
{
	char letra;

	while ((letra = getchar()) != '\n')
	{
		texto[0][(*quantidade_caracteres) -1] = letra;
		texto[0] = (char *) realloc(texto[0], ++(*quantidade_caracteres) * sizeof(char));
	}
}

int _strlen(char *texto)
{
	int i = 0, quantidade_repeticoes = 0;

	while (texto[i++] != '\0')
		quantidade_repeticoes++;

	return (quantidade_repeticoes);
}

int main()
{
	char *texto;
	int i = 0, quantidade_repeticoes;

	texto = (char *) calloc(++i, sizeof(char));

	obter_texto(&texto, &i);
	printf("Total de caracteres: %i.\n", _strlen(texto));

	free(texto);

	return (0);
}
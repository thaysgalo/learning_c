#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void obter_texto(char *texto, int *quantidade_caracteres)
{
	char letra;

	while ((letra = getchar()) != '\n')
	{
		texto[*quantidade_caracteres] = letra;
		texto = (char *) realloc(texto, ++(*quantidade_caracteres) * sizeof(char));
	}
}

void transformar_maiusculo(char *texto, int caracteres)
{
	int i;

	for (i = 0; i < caracteres; ++i)
		texto[i] = toupper(texto[i]);
}

int main()
{
	char *texto;
	int i;

	texto = (char *) malloc(sizeof(char));
	i = 0;

	obter_texto(texto, &i);
	printf("Texto inicial: %s\n", texto);
	transformar_maiusculo(texto, i);
	printf("Texto final: %s\n", texto);

	free(texto);

	return (0);
}
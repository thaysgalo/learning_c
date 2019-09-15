#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void obter_texto(char *texto, int *quantidade_caracteres);
void transformar_vogais_maiusculo(char *texto, int caracteres);

int main(int argc, char **argv)
{
	char *texto;
	int i;

	texto = (char *) malloc(sizeof(char));
	i = 0;

	obter_texto(texto, &i);
	printf("Texto inicial: %s\n", texto);
	transformar_vogais_maiusculo(texto, i);
	printf("Texto final: %s\n", texto);

	free(texto);

	return (0);
}

void obter_texto(char *texto, int *quantidade_caracteres)
{
	char letra;

	while ((letra = getchar()) != '\n')
	{
		texto[*quantidade_caracteres] = letra;
		texto = (char *) realloc(texto, ++(*quantidade_caracteres) * sizeof(char));
	}
}

void transformar_vogais_maiusculo(char *texto, int caracteres)
{
	int i;

	for (i = 0; i < caracteres; ++i)
		if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
			texto[i] = toupper(texto[i]);
}
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void obter_texto(char **texto, int *quantidade_caracteres);
void exibir_menu(void);
int obter_opcao(void);
int calcular_quantidade_vogais(char *texto, int quantidade_caracteres, char vogal);
int calcular_total_vogais(char *texto, int quantidade_caracteres);
void obter_quantidade_repeticoes(char *texto, int quantidade_caracteres, int indice_desejado, int *quantidade_vogal, int *total_vogal);
void imprimir(int quantidade_vogal, int total_vogal);

int main(int argc, char **argv)
{
	char *texto, letra_desejada;
	int i, indice_desejado, quantidade_vogal, total_vogal;

	i = 0;
	texto = (char *) calloc(++i, sizeof(char));

	obter_texto(&texto, &i);
	exibir_menu();
	indice_desejado = obter_opcao();
	obter_quantidade_repeticoes(texto, i, indice_desejado, &quantidade_vogal, &total_vogal);
	imprimir(quantidade_vogal, total_vogal);
	free(texto);

	return (0);
}

void obter_texto(char **texto, int *quantidade_caracteres)
{
	char letra;

	while ((letra = getchar()) != '\n')
	{
		texto[0][(*quantidade_caracteres) - 1] = letra;
		texto[0] = (char *) realloc(*texto, ++(*quantidade_caracteres) * sizeof(char));
	}
}

void exibir_menu(void)
{
	printf("0- Vogal 'a'\n");
	printf("1- Vogal 'e'\n");
	printf("2- Vogal 'i'\n");
	printf("3- Vogal 'o'\n");
	printf("4- Vogal 'u'\n");
}

int obter_opcao(void)
{
	int opcao;

	do {
		printf("Informe a opção referente a vogal desejada:\n");
		scanf("%i", &opcao);
		if (opcao < 0 || opcao > 4)
			printf("Opção inválida!\n");
	} while (opcao < 0 || opcao > 4);

	return (opcao);
}

int calcular_quantidade_vogais(char *texto, int quantidade_caracteres, char vogal)
{
	int i, quantidade_vogal;

	for (quantidade_vogal = i = 0; i < quantidade_caracteres; ++i)
		if (texto[i] == vogal)
			quantidade_vogal++;

	return (quantidade_vogal);
}

int calcular_total_vogais(char *texto, int quantidade_caracteres)
{
	int i, quantidade_vogal;

	for (quantidade_vogal = i = 0; i < quantidade_caracteres; ++i)
		if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
			quantidade_vogal++;

	return (quantidade_vogal);
}

void obter_quantidade_repeticoes(char *texto, int quantidade_caracteres, int indice_desejado, int *quantidade_vogal, int *total_vogal)
{
	int i, quantidade_repeticoes;

	switch (indice_desejado)
	{
		case 0:
			*quantidade_vogal = calcular_quantidade_vogais(texto, quantidade_caracteres, 'a');
			break;
		case 1:
			*quantidade_vogal = calcular_quantidade_vogais(texto, quantidade_caracteres, 'e');
			break;
		case 2:
			*quantidade_vogal = calcular_quantidade_vogais(texto, quantidade_caracteres, 'i');
			break;
		case 3:
			*quantidade_vogal = calcular_quantidade_vogais(texto, quantidade_caracteres, 'o');
			break;
		case 4:
			*quantidade_vogal = calcular_quantidade_vogais(texto, quantidade_caracteres, 'u');
			break;
	}

	*total_vogal = calcular_total_vogais(texto, quantidade_caracteres);
}

void imprimir(int quantidade_vogal, int total_vogal)
{
	printf("Total de repetições da vogal escolhida: %i.\n", quantidade_vogal);
	printf("Total de vogais: %i.\n", total_vogal);
}
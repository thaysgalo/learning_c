// Este programa apresenta exemplos do uso de funções
// na Linguagem C. As funções são subprogramas (módulos)
// que realizam uma, ou algumas, tarefas de acordo com a
// semântica definida em seu identificador. Por exemplo:
// se uma função possui seu identificador como "somar",
// sua implementação interna deve fazer apenas a soma
// de valores, e nada mais.
//
// PS: para o identificador de uma função, pelo fato de ser
// uma tarefa (ação) a ser realizada, conjuga-se o verbo
// no infinitivo.

// A estrutura de uma função é exatamente da seguinte forma:
//		// ABAIXO ESTÁ DEFINIDO O CABEÇALHO DA FUNÇÃO.
// 		tipo_do_dado_retornado nome_da_funcao(tipo_argumento1 nome_argumento1, tipo_argumento2 nome_arumento2 ...)
//		{
//			// AQUI É O CORPO DA FUNÇÃO. NO CORPO DA FUNÇÃO ENCONTRAM-SE AS INSTRUÇÕES COMPUTACIONAIS NECESSÁRIAS
//			// PARA A SUA REALIZAÇÃO.
//		}
//
// Funções podem retornar valores ao longo do seu código interno. Caso a função, em seu cabeçalho defina retorno de
// algum tipo de dado, a mesma deverá empregar, em seu corpo, a existência de uma instrução de retorno(s) de valores.

#include <stdio.h>


int obter_valor(char *posicao)
{
	int valor;

	printf("Informe o %s valor: ", posicao);
	scanf("%d", &valor);

	return (valor);
}

void verificar_valores(int valor1, int valor2)
{
	if (valor1 > 0 && valor2 > 0)
	{
		if (valor1 % 2 == 0 && valor2 % 2 == 0)
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
}

int main()
{
	int valor1;
	int valor2;

	valor1 = obter_valor("primeiro");
	valor2 = obter_valor("segundo");

	verificar_valores(valor1, valor2);

	return (0);
}
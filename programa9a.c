// Este programa apresenta exemplos básicos do uso de 
// coleções bidimensionais (matrizes multiarrays) na Linguagem C.

// PS: matrizes podem ser alocadas estaticamente ou dinamicamente
// na memória do computador. Além disso, esta alocação pode ser
// sequencial ou ligada (linkada).
// Neste programa será apresentado matrizes estáticas e sequenciais.

#include <stdio.h>

int main()
{

	float matriz[5][3];
	// Declaração e inicialização de uma variável que repesenta um vetor:
	int notas[2][3] = { { 5, 10, 4}, {9, 10, 2} };
	// Embora a linha de código acima seja capaz de inicializar os elementos
	// de um vetor, esta não é a melhor prática de fazê-lo.
	// Abaixo é apresentada a melhor maneira de realizar a inicialização de
	// vetores.
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)			
		{
			printf("Informe o valor de matriz[%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}

	return (0);
}
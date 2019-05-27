// Este programa apresenta exemplos básicos do uso de 
// coleções unidimensionais (vetores ou arrays) na Linguagem C.

// PS: vetores podem ser alocados estaticamente ou dinamicamente
// na memória do computador. Além disso, esta alocação pode ser
// sequencial ou ligada (linkada).
// Neste programa será apresentado vetores estáticos e sequenciais.

#include <stdio.h>

int main()
{
	float nota;				
	// Declaração de uma variável que repesenta um vetor:
	int alunos[5];

	// Declaração e inicialização de uma variável que repesenta um vetor:
	int notas[5] = { 7, 8, 3, 10, 4 };
	// Embora a linha de código acima seja capaz de inicializar os elementos
	// de um vetor, esta não é a melhor prática de fazê-lo.
	// Abaixo é apresentada a melhor maneira de realizar a inicialização de
	// vetores.
	int i;
	for (i = 0; i < 5; i++)
	{
		alunos[i] = i;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d.\n", alunos[i]);
	}




	return (0);
}
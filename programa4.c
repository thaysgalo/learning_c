// Este programa apresenta exemplos do uso de operadores
// relacionais na Linguagem C. São eles:

// == (igualdade entre dois valores)
// != (diferença entre dois valores)
// > (comparação de maioridade entre dois valores)
// < (comparação de minoridade entre dois valores) 
// >= (comparação de maioridade ou igualdade entre dois valores)
// <= (comparação de minoridade ou igualdade entre dois valores)

int main()
{
	int resultado_logico;
	int idade;
	char letra;
	
	idade = 10;
	// A linha de código abaixo armazena um valor do tipo inteiro,
	// para a variável "resultado_logico", que será produzido através
	// da comparação relacional entre o valor que está atualmente
	// armazenado na variável "idade" com o valor literal "18".
	//
	// O resultado de relações entre duas informações será sempre
	// um valor do tipo inteiro representando uma saída lógica
	// booleana (verdadeiro ou falso). No caso, por ser do tipo inteiro
	// esse valor será representado por 0 (falso) e 1 (verdadeiro).
	resultado_logico = idade > 18;

	letra = 'A';
	// A linha de código abaixo, armazena o resultado lógico da operação
	// relacional de diferença entre o atual valor armazenado na variável 
	// "letra" com o valor literal "A".	
	resultado_logico = letra != 'A';

	return (0);
}
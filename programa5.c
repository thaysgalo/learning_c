// Este programa apresenta exemplos do uso de operadores
// lógicos na Linguagem C. São eles:

// ! (negação: operador unário que nega o valor lógico quando precedido da variável) "NÃO"
// && (conjunção: operador binário que apresenta a saída verdadeira quando todos os
// valores de entrada são verdadeiros) "E"
// || (disjunção: operador binário que apresenta a saída verdadeira quando apenas
// um valor de entrada é verdadeiro) "OU"

int main()
{
	int const maioridade_civil = 18;
	int idade1 = 25;
	int idade2 = 16;
	int resultado_logico;

	// A linha abaixo apresenta a conjunção lógica entre o valor lógico de duas
	// proposições: 
	// 1- idade1 > maioridade_civil
	// 2- idade2  > maioridade_civil
	//
	// Embora o resultado lógico da 1ª proposição seja verdadeiro, e o resultado 
	// lógico da 2ª seja falso, o resultado lógico final será falso.  
	resultado_logico = idade1 > maioridade_civil && idade2 > maioridade_civil;

	// Neste caso, o resultado lógico final será verdadeiro pois foi usado uma disjunção lógica,
	// onde basta apenas que a saída lógica de uma única proposição seja verdadeira.
	resultado_logico = idade1 > maioridade_civil || idade2 > maioridade_civil;

	// Após o processamento da linha abaixo, o resultado lógico final do argumento
	// será o oposto, pois a negação inverte o valor lógico.
	resultado_logico = !(idade1 > maioridade_civil || idade2 > maioridade_civil);

	return (0);
}
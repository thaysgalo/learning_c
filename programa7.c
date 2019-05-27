// Este programa apresenta exemplos básicos do uso de 
// estruturas condicionais e seletivas na Linguagem C.

// A linguagem C possui as estruturas condicionais
// "if" e "if-else", além da estrutura seletiva switch-case.
// O uso destas estruturas será explanado no programa
// a seguir.

#include <stdio.h>

int main()
{
	int idade = 16;

	// A palavra reservada "if" seguida de uma
	// operação condicional, realizada através
	// do uso de operadores relacionais e/ou
	// lógicos entre valores. Em linhas gerais
	// a palavra reservada (Keyword) "if" compara 
	// a saída lógica gerada pela condicional. 
	// Se for verdadeiro, o bloco de código aninhado
	// será executado.
	// O if pode ser acompanhado de uma outra palavra 
	// reservada denominada "else". Neste caso, o bloco
	// de código aninhado ao else será executado quando
	// o resultado lógico da condicional do if for falso.
	if (idade >= 18)
		printf("Maior de idade.\n");
	else
		printf("Menor de idade.\n");



	return (0);
}
// Este programa apresenta exemplos básicos de entrada e 
// saída de dados na Linguagem C.
// Para tal, será utilizada stdio.h (STanDard Input and Output)
// que oferece funções e estruturas de dados para tratar
// entrada de dados via teclado e saída de dados pelo display.
// 
// Para incluir a biblioteca deve-se utilizar a diretiva de 
// pré processamento #include. Desta forma utiliza-se:

#include <stdio.h>

// Abaixo serão apresentadas duas das principais funções da referida biblioteca.
//
// printf(arg1, arg2, ...) - A função PRINT Formatted (imprimir formatado) é
// utilizada para apresentar informações em tela. Para esta função, é
// obrigatório o fornecimento de no mínimo 1 argumento, sendo este, a mensagem
// de texto que será apresentada no display.
// Ocasionalmente, poderão haver outros argumentos. Estes serão responsáveis
// por fornecer informações que serão incluídas no texto do arg1.
// 
// scanf(arg1, arg2, ...) -  A função SCAN Formatted (ler formatado) é
// utilizada para ler informações oriundas do teclado. Para esta função, é
// obrigatório o fornecimento de no mínimo 2 argumentos. O primeiro (arg1)
// trata-se do caractere de conversão. O segundo (arg2) é referente a variável
// que armazenará os dados lidos do teclado.
//
// Caracteres de conversão
// Os caracteres de conversão são utilizados pela biblioteca stdio.h para
// explicitar o tipo de dado a ser utilizado. Tanto para a funçao printf
// quanto para a função scanf.
// São eles:
//
// %d ou %i - caractere de conversão para um valor do tipo int.
// %f - caractere de conversão para um valor do tipo float.
// %lf - caractere de conversão para um valor do tipo double float.
// %c - caractere de conversão para um valor do tipo char.
// 
// Existem diversos outros caracteres de conversão de tipos. Contudo,
// os listados acima são suficientes para este curso.  

int main()
{
	// A linha abaixo apresenta a chamada da função printf passando
	// como parâmetro para a função apenas um único e obrigatório
	// argumento: a mensagem de texto.
	// Nota: foi utilizado o caractere de escape "\n" (New line).
	printf("OLÁ MUNDO!\n");

	// A linha abaixo apresenta a chamada da função printf passando
	// como parâmetro para a função dois argumentos, sendo:
	// arg1) A mensagem de texto contendo um caractere de conversão do tipo
	// inteiro;
	// arg2) A variável cujo caractere de conversão converterá o valor
	// armazenado, na referida variável, para dentro do texto do arg1.
	// argumento: a mensagem de texto.
	int idade = 19;
	printf("O Ricardo tem %d anos.\n", idade);

	printf("Informe a sua idade:\n");
	scanf("%d", &idade);
	printf("Daqui a cinco anos você terá %d anos.", idade + 5);

	return (0);
}
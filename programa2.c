// Este programa possui a declaração e a inicialização de 
// algumas variáveis e seus respectivos tipos primitivos
// de dados suportados pela lingugaem C.

int main()
{
	// A linha abaixo apresenta somente a declaração de uma
	// variável do tipo char (1 byte). O identificador
	// dessa variável possui nome de "partida".
	char partida;

	// A linha abaixo apresenta a inicialização da variável
	// "partida" previamente declarada.
	partida = '2';

	// A linha abaixo apresenta a declaração e a 
	// inicialização de uma variável do tipo inteiro.
	// (4 bytes).
	int classificacao = 5;

	// A linha abaixo apresenta a declaração e a inicialização
	// de uma variável do tipo FLUTUANTE (4 bytes). 
	float salario = 1.5;

	// A linha abaixo apresenta a declaração e inicialiazação
	// de uma vairável do tipo Dobro Flutuante (8 bytes).
	double numerodepessoas = 100000.12;

	// A linha abaixo está comentada porque apresenta a declaração
	// de uma variável do tipo void. Contudo, na linguagem C, não é 
	// permitido declarar variáveis do tipo void pois o tipo void é
	// um tipo incompleto de dado e, sendo assim, tipos incompletos
	// não podem ser declarados como variáveis.
	//
	// O void é um tipo de dado utilizado, principalmente, no retorno
	// de funções em C que não retornam valores (funções que não retornam
	// valores, são chamadas de procedimentos).
	// void nada;

	return (0);
}
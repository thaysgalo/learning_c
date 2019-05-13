// Este programa apresenta exemplos do uso de operadores
// aritméticos na Linguagem C. São eles:

// + (Adição)
// - (Subtração)
// * (Multiplicação)
// / (Divisão) 
// % (Resto da divisão ou mod (module of division))

// Também é possível, em C, incrementar ou decrementar variáveis
// do tipo int (inteiro) através dos seguintes operadores:

// ++ (Incrementa uma variável de 1 em 1 valor inteiro)
// -- (Decrementa uma variável de 1 em 1 valor inteiro)
// Quando utilizado no prefixo da(s) variável(is), o incremento / decremento é
// realizado antes do processamento da linha de código. Quando utilizado
// no sufixo, primeiro é realizado o processamento da linha de código e
// posteriormente o incremento / decremento da(s) variável(is).

int main()
{
	// A linha abixo apresenta a declaração e inicialização de 
	// uma variável do tipo inteira cujo valor inicial é 5.
 	int frutas = 5;

 	// A linha abaixo apresenta uma opração de adição (símbolo "+")
 	// entre o valor atualmente armazenado na memória da varável 
 	// "frutas" e o valor "8" literalmente explícito.
 	// Ao final da execução desta linha, o valor que será armazenado 
 	// na memória referenciada pela variável "frutas" será 13.
	frutas = frutas + 8;

	// Subtração
	int laranjas = 2;
	laranjas = laranjas - 1;

	// Multiplicação
	int limao = 1;	
	int citricos = laranjas * limao;

	// Divisão
	int uvas = 4;
	int pessoas = 2;
	int divisao = uvas / pessoas;

	// Resto da divisão
	int resto = laranjas % pessoas;

	// Incrementar
	int morangos = 3;
	morangos = laranjas + 1;
	++morangos;

	// Decrementar
	int jacas = 1;
	jacas = frutas;
	--jacas;


	return (0);
}
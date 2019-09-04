#include <stdio.h>

int main()
{
	int banana;
	int beterraba;
	int *p_banana;

	banana = 1042;
	p_banana = &banana;

	*p_banana = 10000;

	printf("Valor: %d\tEndereço: %p\n", banana, &banana);
	printf("Valor: %d\tEndereço: %p\n", beterraba, &beterraba);
	printf("Valor: %p\tEndereço: %p\tValor apontado: %d\n", p_banana, &p_banana, *p_banana);

	p_banana = &beterraba;

	*p_banana = 2 * banana;

	printf("\n");
	printf("Valor: %d\tEndereço: %p\n", banana, &banana);
	printf("Valor: %d\tEndereço: %p\n", beterraba, &beterraba);
	printf("Valor: %p\tEndereço: %p\tValor apontado: %d\n", p_banana, &p_banana, *p_banana);

	return (0);
}
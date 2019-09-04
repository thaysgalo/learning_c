#include <stdio.h>

int main()
{
	int banana;
	int *p_banana;

	banana = 1042;
	p_banana = &banana;

	printf("Valor: %d\tEndereço: %p\n", banana, &banana);
	printf("Valor: %p\tEndereço: %p\tValor apontado: %d\n", p_banana, &p_banana, *p_banana);

	return (0);
}
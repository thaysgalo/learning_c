#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = (int *) malloc(sizeof(int));
	printf("O endereço do ponteiro é: %d\n", &p);
	free(p);

	return (0);
}
#include <stdio.h>

int main()
{	
	int valor1;
	int valor2;
	

	printf("Informe um número:\n");
	scanf("%d", &valor1);

	do
	{
		printf("Resultado %d.\n", valor1);
		++valor1;
	}
	while (valor1 % 2 == 0 && valor1 == valor2);

	//for(valor = 0 ; valor > 0 ; valor++)
	//{	
	//	valor[n] = n;

	//}
	//for(valor = 0 ; valor > 0 ; valor++)
	//{
	//	printf("%d", &&valor);
	//}






	return (0);
}
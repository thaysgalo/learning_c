#include <stdio.h>

float somar(float valor1, float valor2)
{
	return (valor1 + valor2);
}

float multiplicar(float numero1, float numero2)
{
	return (numero1 * numero2);
}

float calcular_potencia(float base, float expoente)
{
	int i;
	float potencia = 1;

	for (i = 0; i < expoente; ++i)
	{
		potencia = potencia * base;
	}

	return (potencia);
}

int main()
{
	float resultado;
	//resultado = somar(10, 15);
	resultado = calcular_potencia(2, 5);
	printf("%f", resultado);

	return (0);
}
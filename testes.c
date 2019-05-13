
#include <stdio.h>

int main()
{
	float pesomae;
	float pesopai;

	printf("%s" , "informe o peso da mãe:\n");
	scanf("%f" , &pesomae);
	printf("%s" , "informe o peso do pai:\n");
	scanf("%f" , &pesopai);

	if (pesomae > pesopai) 
	{
		printf("Mãe é mais pesada que pai.\n");
	}
	else
	{
		printf("Pai é mais pesado que a mãe.\n");
	}

	return (0);
} 
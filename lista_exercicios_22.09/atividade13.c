#include <stdio.h>
#include <stdlib.h>

typedef struct arv t_arv;
struct arv  
{ 
	int info; 
	t_arv *esq; 
	t_arv *dir; 
};

t_arv *inicializar(void)
{
	return (NULL);
}

t_arv *criar(int info, t_arv *dir, t_arv *esq)
{
	t_arv *no = (t_arv *) malloc(sizeof(t_arv));

	no->info = info;
	no->esq = dir;
	no->dir = esq;

	return (no);
}

void imprimir(t_arv *no)
{
	printf("%d\n", no->info);

	if (no->esq)
		imprimir(no->esq);
	if (no->dir)
		imprimir(no->dir);
}

int determinar_altura(t_arv *no)
{
	if (!no)
		return (0);
	else
	{
		int altura_esquerda = determinar_altura(no->esq);
		int altura_direita = determinar_altura(no->dir);

		if (altura_esquerda > altura_direita)
			return (altura_esquerda + 1);
		return (altura_direita + 1);
	}
}

t_arv *liberar(t_arv *no)
{
	if (no)
	{
		liberar(no->esq);
		liberar(no->dir);
		free(no);
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	t_arv *no_a = inicializar();
	no_a = criar(1, NULL, NULL);
	no_a->esq = criar(2, NULL, NULL);
	
	t_arv *no_c = inicializar();
	no_c = criar(3, NULL, NULL);

	no_a->dir = no_c;
	
	no_c->dir = criar(5, NULL, NULL);

	no_a->dir->esq = criar(4, NULL, NULL);

	imprimir(no_a);

	printf("Altura: %d.\n", determinar_altura(no_a));

	liberar(no_a);

	return (0); 
}
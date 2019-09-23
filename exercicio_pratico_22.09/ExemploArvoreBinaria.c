// Fun��o :  Exemplo de Arvore Bin�ria
// Autor :    Raul Brand�o
// Data : 07/09/2019

#include <stdio.h>
#include <stdlib.h>

/* Para esse exemplo enteda que cada n� armazena tr�s informa��es:
   nesse caso um n�mero (num),
   ponteiro para sub�rvore � direita (psad)
   e ponteiro para sub�rvore � esquerda (psae).*/
   
typedef struct tree
{
  int num;
  struct tree* psad;
  struct tree* psae;
} Tree;

/* A estrutura da �rvore � representada por um ponteiro
   para o n� raiz. Com esse ponteiro, temos acesso aos
   demais n�s. */

/* Fun��o que cria uma �rvore */
Tree* createTree()
{
  /* Uma �rvore � representada pelo endere�o do n� raiz,
     essa fun��o cria uma �rvore com nenhum elemento,
     ou seja, cria uma �rvore vazia, por isso retorna NULL. */
  return NULL;
}

/* Fun��o que verifica se uma �rvore � vazia */
int treeIsEmpty(Tree* t)
{
  /* Retorna 1 se a �rvore for vazia e 0 caso contr�rio */
  return t == NULL;
}

/* Fun��o que mostra a informa��o da �rvore */
void showTree(Tree* t)
{
  /* Essa fun��o imprime os elementos de forma recursiva */
  
  printf("<"); /* nota��o para organizar na hora de mostrar os elementos */
  if(!treeIsEmpty(t)) /* se a �rvore n�o for vazia... */
  {
    /* Mostra os elementos em pr�-ordem */
    printf("%d", t->num); /* mostra a raiz */
    showTree(t->psae); /* mostra a psae (sub�rvore � esquerda) */
    showTree(t->psad); /* mostra a psad (sub�rvore � direita) */
  }
  printf(">"); /* nota��o para organizar na hora de mostrar os elementos */
}

void imprimir_pre_ordem(Tree* t)
{
	printf("<");
	if (!treeIsEmpty(t))
		printf("%d", t->num);
	if (!treeIsEmpty(t->psae))
		imprimir_pre_ordem(t->psae);
	if (!treeIsEmpty(t->psad))
		imprimir_pre_ordem(t->psad);
	printf(">");
}

void imprimir_em_ordem(Tree* t)
{
	printf("<");
	if (!treeIsEmpty(t->psae))
		imprimir_em_ordem(t->psae);
	if (!treeIsEmpty(t))
		printf("%d", t->num);
	if (!treeIsEmpty(t->psad))
		imprimir_em_ordem(t->psad);
	printf(">");	
}

void imprimir_pos_ordem(Tree* t)
{
	printf("<");
	if (!treeIsEmpty(t->psae))
		imprimir_pos_ordem(t->psae);
	if (!treeIsEmpty(t->psad))
		imprimir_pos_ordem(t->psad);
	if (!treeIsEmpty(t))
		printf("%d", t->num);
	printf(">");
}

/* Fun��o que insere um dado na �rvore */
void insertTree(Tree** t, int num)
{
  /* Essa fun��o insere os elementos de forma recursiva */
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree)); /* Aloca mem�ria para a estrutura */
    (*t)->psae = NULL; /* Sub�rvore � esquerda � NULL */
    (*t)->psad = NULL; /* Sub�rvore � direita � NULL */
    (*t)->num = num; /* Armazena a informa��o */
  } else {
    if(num < (*t)->num) /* Se o n�mero for menor ent�o vai pra esquerda */
    {
      /* Percorre pela sub�rvore � esquerda */
      insertTree(&(*t)->psae, num);
    }
    if(num > (*t)->num) /* Se o n�mero for maior ent�o vai pra direita */
    {
      /* Percorre pela sub�rvore � direita */
      insertTree(&(*t)->psad, num);
    }
  }
}

/* Fun��o que verifica se um elemento pertence ou n�o � �rvore */
int isInTree(Tree* t, int num) {
  
  if(treeIsEmpty(t)) { /* Se a �rvore estiver vazia, ent�o retorna 0 */
    return 0;
  }
  
  /* O operador l�gico || interrompe a busca quando o elemento for encontrado */
  return t->num==num || isInTree(t->psae, num) || isInTree(t->psad, num);
}

int main()
{
  Tree* t = createTree(); /* cria uma �rvore */
  
  insertTree(&t, 12); /* insere o elemento 12 na �rvore */
  insertTree(&t, 15); /* insere o elemento 15 na �rvore */
  insertTree(&t, 10); /* insere o elemento 10 na �rvore */
  insertTree(&t, 13); /* insere o elemento 13 na �rvore */
  insertTree(&t, 19); /* insere o elemento 13 na �rvore */
  insertTree(&t, 33); /* insere o elemento 13 na �rvore */
  insertTree(&t, 21); /* insere o elemento 13 na �rvore */
   
  showTree(t); /* Mostra os elementos da �rvore em pr�-ordem */
	printf("\n");
	printf("PreOrder: ");
	imprimir_pre_ordem(t);
	printf("\n");
	printf("InOrder: ");
	imprimir_em_ordem(t);
	printf("\n");
	printf("PosOrder: ");
	imprimir_pos_ordem(t);
  
  if(treeIsEmpty(t)) /* Verifica se a �rvore est� vazia */
  {
    printf("\n\nArvore vazia!!\n");
  } else {
    printf("\n\nArvore NAO vazia!!\n");
  }
  
  if(isInTree(t, 19)) { /* Verifica se o n�mero 19 pertence a �rvore */
    printf("\nO numero 19 pertence a arvore!\n");
  } else {
     printf("\nO numero 19 NAO pertence a arvore!\n");
  }
  
  if(isInTree(t, 44)) { /* Verifica se o n�mero 44 pertence a �rvore */
    printf("\nO numero 44 pertence a arvore!\n\n");
  } else {
     printf("\nO numero 44 NAO pertence a arvore!\n\n");
  }
  
  free(t); /* Libera a mem�ria alocada pela estrutura �rvore */
  
  return 0;
}

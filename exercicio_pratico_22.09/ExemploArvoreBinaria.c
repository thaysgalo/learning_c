// Função :  Exemplo de Arvore Binária
// Autor :    Raul Brandão
// Data : 07/09/2019

#include <stdio.h>
#include <stdlib.h>

/* Para esse exemplo enteda que cada nó armazena três informações:
   nesse caso um número (num),
   ponteiro para subárvore à direita (psad)
   e ponteiro para subárvore à esquerda (psae).*/
   
typedef struct tree
{
  int num;
  struct tree* psad;
  struct tree* psae;
} Tree;

/* A estrutura da árvore é representada por um ponteiro
   para o nó raiz. Com esse ponteiro, temos acesso aos
   demais nós. */

/* Função que cria uma árvore */
Tree* createTree()
{
  /* Uma árvore é representada pelo endereço do nó raiz,
     essa função cria uma árvore com nenhum elemento,
     ou seja, cria uma árvore vazia, por isso retorna NULL. */
  return NULL;
}

/* Função que verifica se uma árvore é vazia */
int treeIsEmpty(Tree* t)
{
  /* Retorna 1 se a árvore for vazia e 0 caso contrário */
  return t == NULL;
}

/* Função que mostra a informação da árvore */
void showTree(Tree* t)
{
  /* Essa função imprime os elementos de forma recursiva */
  
  printf("<"); /* notação para organizar na hora de mostrar os elementos */
  if(!treeIsEmpty(t)) /* se a árvore não for vazia... */
  {
    /* Mostra os elementos em pré-ordem */
    printf("%d", t->num); /* mostra a raiz */
    showTree(t->psae); /* mostra a psae (subárvore à esquerda) */
    showTree(t->psad); /* mostra a psad (subárvore à direita) */
  }
  printf(">"); /* notação para organizar na hora de mostrar os elementos */
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

/* Função que insere um dado na árvore */
void insertTree(Tree** t, int num)
{
  /* Essa função insere os elementos de forma recursiva */
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree)); /* Aloca memória para a estrutura */
    (*t)->psae = NULL; /* Subárvore à esquerda é NULL */
    (*t)->psad = NULL; /* Subárvore à direita é NULL */
    (*t)->num = num; /* Armazena a informação */
  } else {
    if(num < (*t)->num) /* Se o número for menor então vai pra esquerda */
    {
      /* Percorre pela subárvore à esquerda */
      insertTree(&(*t)->psae, num);
    }
    if(num > (*t)->num) /* Se o número for maior então vai pra direita */
    {
      /* Percorre pela subárvore à direita */
      insertTree(&(*t)->psad, num);
    }
  }
}

/* Função que verifica se um elemento pertence ou não à árvore */
int isInTree(Tree* t, int num) {
  
  if(treeIsEmpty(t)) { /* Se a árvore estiver vazia, então retorna 0 */
    return 0;
  }
  
  /* O operador lógico || interrompe a busca quando o elemento for encontrado */
  return t->num==num || isInTree(t->psae, num) || isInTree(t->psad, num);
}

int main()
{
  Tree* t = createTree(); /* cria uma árvore */
  
  insertTree(&t, 12); /* insere o elemento 12 na árvore */
  insertTree(&t, 15); /* insere o elemento 15 na árvore */
  insertTree(&t, 10); /* insere o elemento 10 na árvore */
  insertTree(&t, 13); /* insere o elemento 13 na árvore */
  insertTree(&t, 19); /* insere o elemento 13 na árvore */
  insertTree(&t, 33); /* insere o elemento 13 na árvore */
  insertTree(&t, 21); /* insere o elemento 13 na árvore */
   
  showTree(t); /* Mostra os elementos da árvore em pré-ordem */
	printf("\n");
	printf("PreOrder: ");
	imprimir_pre_ordem(t);
	printf("\n");
	printf("InOrder: ");
	imprimir_em_ordem(t);
	printf("\n");
	printf("PosOrder: ");
	imprimir_pos_ordem(t);
  
  if(treeIsEmpty(t)) /* Verifica se a árvore está vazia */
  {
    printf("\n\nArvore vazia!!\n");
  } else {
    printf("\n\nArvore NAO vazia!!\n");
  }
  
  if(isInTree(t, 19)) { /* Verifica se o número 19 pertence a árvore */
    printf("\nO numero 19 pertence a arvore!\n");
  } else {
     printf("\nO numero 19 NAO pertence a arvore!\n");
  }
  
  if(isInTree(t, 44)) { /* Verifica se o número 44 pertence a árvore */
    printf("\nO numero 44 pertence a arvore!\n\n");
  } else {
     printf("\nO numero 44 NAO pertence a arvore!\n\n");
  }
  
  free(t); /* Libera a memória alocada pela estrutura árvore */
  
  return 0;
}

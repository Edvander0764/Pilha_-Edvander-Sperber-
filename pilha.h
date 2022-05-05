#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef char elemento;

// Define a estrutura Pilha
struct spilha{
int topo;
elemento vetor[MAX];
};   

void init(struct spilha *p);
int isEmpty(struct spilha *p);
int isFull(struct spilha *p);
void push(struct spilha *p, elemento v);
elemento pop(struct spilha *p);
elemento top(struct spilha *p);


void init(struct spilha *p)
{ p->topo = 0; }

int isEmpty(struct spilha *p)
{ return (p->topo == 0);
}

int isFull(struct spilha *p)
{ return (p->topo == MAX); /* capacidade esgotada */
}

void push(struct spilha *p, elemento v)
{
if (isFull(p)) { /* capacidade esgotada */
   printf("Capacidade da pilha estourou.\n");
   exit(1); /* aborta programa */
}

/* insere elemento na pr�xima posi��o livre */
p->vetor[p->topo] = v;
p->topo++;
}

elemento pop(struct spilha *p)
{
elemento v;

if (isEmpty(p))
{printf("Pilha vazia.\n");
 exit(1); // aborta programa
}

v = p->vetor[p->topo-1];
p->topo--;
return v;

}

elemento top(struct spilha *p)
{
elemento v;

if (isEmpty(p))
{printf("Pilha vazia.\n");
 exit(1); // aborta programa
}

v = p->vetor[p->topo-1];

return v;

}

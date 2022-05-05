#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    struct spilha p;
    init(&p);

    printf("\n Criando pilha \n\n");

    push(&p,'A');
    push(&p, top(&p));
    push(&p, 'B');
    pop(&p);
    push(&p, 'C');
    push(&p, pop(&p));
    push(&p, 'D');
    pop(&p);

    
    for(int i = p.topo - 1; i >= 0; i--){
        printf("%c\n", p.vetor[i]);
    }
    return 0;
}
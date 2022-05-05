
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    struct spilha pilha;
    int i;

    init(&pilha);
    
    push(&pilha,'A');
    push(&pilha,'B');
    push(&pilha,'C');
    push(&pilha,'D');

    printf("\n >>> PILHA INICIAL <<< \n");

    for (i = pilha.topo - 1 ; i>=0 ; i--)
    {
        printf(" %c\n",pilha.vetor[i]); 
    }
    sleep(2);

    //----------------------------------------------------

    printf("\n... Executando PUSH (p, TOP (p)) ...\n\n");
    push(&pilha, top(&pilha));
    
    sleep(1);
    for (i = pilha.topo - 1 ; i>=0 ; i--)
    {
        printf(" %c\n",pilha.vetor[i]); 
    }
    sleep(2);

    //----------------------------------------------------

    printf("\n... Executando POP (p) ...\n\n", pop(&pilha));

    sleep(1);
    for (i = pilha.topo - 1 ; i>=0 ; i--)
    {
        printf(" %c\n",pilha.vetor[i]); 
    }
    sleep(2);

    //----------------------------------------------------

    printf("\n... Executando PUSH (p, POP (p)) ...\n\n"); //aqui tira, mas coloca de novo. Basicamente continua no estado anterior.
    push(&pilha, pop(&pilha));

    sleep(1);
    for (i = pilha.topo - 1 ; i>=0 ; i--)
    {
        printf(" %c\n",pilha.vetor[i]); 
    }
    sleep(2);

    //----------------------------------------------------

    printf("\n... Executando POP (p) ...\n\n", pop(&pilha));
    
    sleep(1);
    for (i = pilha.topo - 1 ; i>=0 ; i--)
    {
        printf(" %c\n",pilha.vetor[i]); 
    }
    sleep(2);

    //----------------------------------------------------

    printf("\n >>> PILHA FINAL <<< \n\n");
    
    sleep(1);
    for (i = pilha.topo - 1 ; i>=0 ; i--)
    {
        printf(" %c\n",pilha.vetor[i]); 
    }
    return 0;
}



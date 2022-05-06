#include <stdio.h>
#include <stdlib.h>
#include "pilha.h" 

int main()
{
    struct spilha pilha;
    int nCont, numero; 

    init(&pilha);   

    printf("Digite um numero positivo inteiro qualquer: "); 
    scanf("%d", &numero);

    do
    { 
        if(numero % 2 == 0)
        {
            push(&pilha, 0); 
        }
        else
        {
            push(&pilha, 1);
        }

        numero = numero/2;
    }
    while (numero != 0);

    printf("\nEm binario, este numero e: ");
   
    for (nCont = pilha.topo-1 ; nCont >= 0 ; nCont--)
    { 
        printf("%d", pilha.vetor[nCont]);          
    }

    printf("\n");

    return 0;
}
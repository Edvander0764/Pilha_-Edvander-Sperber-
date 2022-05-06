#include <stdio.h>
#include <stdlib.h>
#include "pilha.h" 

int main()
{  
    struct spilha numerosAleatorios, pares, impares;  
    int nCont, nCont2, topo, quantitativo;

    init(&numerosAleatorios);
    init(&pares);
    init(&impares);

    srand(time(NULL));

    printf("Quantos numeros aleatorios desejas? ");
    scanf("%d", &quantitativo);

    printf(" >>> ELEMENTOS ALEATORIOS <<< \n\n");
    for (nCont = 0; nCont <= quantitativo - 1 ; nCont++)
    {  
        push(&numerosAleatorios, rand() % 100); 
        printf(" %d ", numerosAleatorios.vetor[nCont]);

        if ((numerosAleatorios.vetor[nCont] % 2 == 0) || (numerosAleatorios.vetor[nCont] == 0))
        { 
            push(&pares, numerosAleatorios.vetor[nCont]); 
        }
        else
        {
            push(&impares, numerosAleatorios.vetor[nCont]);
        }
    }
    
    printf("\n\n >>> PILHA PAR <<< \n\n");

    for (nCont = pares.topo-1 ; nCont >= 0; nCont--)
    { 
        printf(" %d\n", pares.vetor[nCont]);
    } 

    printf("\n >>> PILHA IMPAR <<< \n\n");

    for (nCont = impares.topo-1 ; nCont >= 0; nCont--)
    {
        printf(" %d\n", impares.vetor[nCont]);
    } 
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "pilha.h" 

int main()
{
    struct spilha talvezPalindroma;  
    char palavra[100], palavraInvertida[100]; 
    int nCont;

    printf("Digite um palavra: ");
    scanf(" %[^\n]s", palavra);    

    init(&talvezPalindroma);   

    push(&talvezPalindroma, '\0');  

    for (nCont = 0; nCont <= strlen(palavra) - 1 ; nCont++)
    {  
        push(&talvezPalindroma, palavra[nCont]); 
    }

    for (nCont = 0; nCont <= strlen(palavra) ; nCont++)
    {
        palavraInvertida[nCont] = pop(&talvezPalindroma);
    }

    printf("\nA palavra original e: %s\n", palavra); 

    printf("\nA palavra invertida e: %s\n", palavraInvertida); 

    if (strcmp(palavra, palavraInvertida) == 0)
    { 

        printf("\nViu que a palavra invertida e igual a original? Entao esta palavra e palindroma\n");
    }  
    else
    {
        printf("\nViu que a palavra invertida NAO e igual a original? Entao esta palavra nao e palindroma\n");    
    }

    return 0;
}
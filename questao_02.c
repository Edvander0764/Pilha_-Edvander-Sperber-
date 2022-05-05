#include <stdio.h>
#include <stdlib.h>
#include "pilha.h" 

int main(){

	struct spilha x, y, z; 
	int i;

    init(&x);
    init(&y);
    init(&z);

    push(&x,'A'); 
    push(&x,'B'); 
    push(&x,'C');
    push(&x,'D');

	printf("=================");
	printf("\n >>> PILHA X <<< \n\n");

    for (i = x.topo-1 ; i>=0 ; i--)
	{
        printf(" %c\n", x.vetor[i]); 
		sleep(1); 
    }
	printf("\n x      y      z\n" ); 
	printf("=================");

    push(&y,pop(&x));
    push(&y,pop(&x)); 
    push(&y,pop(&x));
    push(&z,pop(&x));
    push(&x,pop(&y));
    push(&z,pop(&y));
    push(&z,pop(&x));
    push(&z,pop(&y));

	sleep(1);

 	printf("\n\n>>> ... reordenando ... <<<\n\n");

	sleep(3); //3 segundos de delay. 
	//Meu sistema reconhece a escrita como segundos, não milésimos. 
	//caso seu sistema reconheça milésimos, é só colocar "3000" no lugar do "3".

	printf("=================");
    printf("\n >>> PILHA Z <<< \n\n");

    for (i = z.topo-1 ; i>=0 ; i--)
	{
        printf(" %15c\n",z.vetor[i]);  
		sleep(1);
    }
	printf("\n x      y      z\n" ); 
	printf("=================\n");
    return 0;
}
//achei muito bonitinho o daley
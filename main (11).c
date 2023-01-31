/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int media;
    int somma;
    int cont;
    
    printf("inserire un numero positivo\n");
    numero=0;
    somma=0;
    cont=0;
    media=0;
    while(numero>=0)
    {
        scanf("%d",&numero);
        media=somma/cont;
        cont=cont+cont+1;
        somma=somma+numero;
        printf("fare la media di tutti i numeri introdotti %d\n",media);
    }
    
    
    return 0;
}

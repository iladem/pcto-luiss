/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fattoriale(int numero)
    {
        int tot=1;
        while(numero>0)
    {
        tot=tot*numero;
        numero=numero-1;
    }    
        printf("il fattoriale è: %d\n",tot);
    }
int main()
 { 
    int N;
    printf("prendi un numero\n");
    scanf("%d",&N);
    
    fattoriale(N);
    
    return 0;
}

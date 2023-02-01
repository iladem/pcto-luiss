/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int prezzo;
    int sconto;
    int n_ordini;
    float totale;
    
    prezzo=5;
    n_ordini=1;
    while(n_ordini>0)
    {
    printf("quanti ordini?\n");
    scanf("%d",&n_ordini);
    if(n_ordini<=30)
    {
        totale=n_ordini*prezzo;
        printf("il totale che devi pagare è: %f\n",totale);
    }
    else if(n_ordini>=30 && n_ordini<=50)
    {
        totale=n_ordini*prezzo*(1-0.10);
        printf("il totale con lo sconto è: %f\n",totale);
    }
    else
    {
        totale=n_ordini*prezzo*(1-0.15);
        printf("il totale con lo sconto è: %f\n",totale);
    }
    return 0;
    }
}

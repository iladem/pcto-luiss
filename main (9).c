/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1, x;
    int i=1;

    printf("prendere un numero da verificare:\n");
    scanf("%d",&numero1);
    if(numero1>1)
{
    do
    { 
    i++;
    x=numero1 % i;
}
    while(x);
    }
    if(i==numero1)
    {
    printf("il numero è primo\n");
    }
    else
    {
    printf("il numero non è primo\n");
    }
    return 0;
}

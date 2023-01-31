/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("inserisci due numeri\n");
    int numero1;
    int numero2;
    scanf("%d",&numero1);
    scanf("%d",&numero2);

    if(numero1%numero2==0)
{
    printf("il primo numero è multiplo del secondo numero");
}
    else
    {
    printf("il primo numero non è multiplo del secondo numero");
    }
    return 0;
}
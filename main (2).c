/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserisci n1\n");
    scanf("%d",&n1);
    printf("inserisci n2\n");
    scanf("%d",&n2);
    printf("inserisci n3\n");
    scanf("%d",&n3);
    if(n1-n2==n2-n3)
{
    printf("i numeri sono progressione aritmetica\n");
}
    else
    {
    printf("i numeri non sono in progressione aritmetica\n");
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anno;
    printf("inserire un anno\n");
    scanf("%d",&anno);
    if((anno%4==0 && anno%100!=0)||anno%400==0)
{
    printf("l'anno è bisestile\n");
}
    else
    {
    printf("l'anno non è bisestile\n");
    }
    return 0;
}

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
    printf("in che anno sei nato?\n");
    scanf("%d",&anno);
    
    if(anno==1969)
    {
    printf("utente nato lo stesso anno in cui l'uomo è andato sulla Luna\n");
    }
    else if(anno<1969)
    {
    printf("utente nato prima dell'anno in cui l'uomo è andato sulla Luna\n");
    }
    else
    {
    printf("utente nato dopo l'anno in cui l'uomo è andato sulla Luna\n");
    }
    return 0;
}

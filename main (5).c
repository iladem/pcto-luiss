/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void lett(char A)
{
    printf("la lettera inserita è %c\n",A);
}
int main()
{
    char lettera;
    printf("inserire una lettera\n");
    scanf("%c",&lettera);
    lett(lettera);

    return 0;
}

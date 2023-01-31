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
    printf("inserire n1\n");
    scanf("%d",&n1);
    printf("inserire n2\n");
    scanf("%d",&n2);
    printf("inserire n3\n");
    scanf("%d",&n3);
    
    if(n1!=n2 && n2!=n3 && n3!=n1)
    printf("il triangolo è scaleno\n");
    else if(n1==n2 && n2==n3 && n3==n1)
    printf("il triangolo è equilatero\n");
    else 
    printf("il triangolo è isoscele\n");
    
    return 0;
}

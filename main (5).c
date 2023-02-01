/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ultimate_ft(int*********nbr)
{
    *********nbr=42;
}
int main()
{
    int a,*b,**c,***d,****e,*****f,******g,*******h,********i,*********l;
    a = 1;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    i = &h;
    l = &i;
    ft_ultimate_ft(l);
    printf("%d\n",*********l);
    return 0;
}

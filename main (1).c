/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    float kelvin;
    printf("inserisci la temperatura in celsius\n");
    scanf("%f",&celsius);
    
    if(celsius <-273.15)
    {
    printf("errore\n");
    }
    else
    {
    fahrenheit=(9/5)*celsius + 32;
    kelvin=celsius+273.15;
    printf("la temperatura in kelvin è %f\n",kelvin);
    printf("la temperatura in fahrenheit è %f\n",fahrenheit);
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int ordinanumeri (int *array, int dimensione)
{
    int j;
    int temp;
    int s;
    
    temp=0;
    j=0;
    while(j<dimensione-1)
    {
        s=j+1;
        while(s<dimensione)
        {
          if(array[j]>array[s]) 
      {
        temp=array[j];
        array[j]=array[s];
        array[s]=temp;
    }
      s=s+1;
    }
      j=j+1;
}
}
int main()
{
    int array[]={2,6,9,5,3,10,4,21,42,-3};
    int dimensione=10;
    int j=0;
    
    ordinanumeri(array,dimensione);
    while(j<dimensione)
    {
      printf("%d\n",array[j]);
      j=j+1;
    }
    return 0;
}

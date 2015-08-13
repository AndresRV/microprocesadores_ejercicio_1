#include <stdio.h>
#include "calculadora.h"

int main(void)
{
  int c, a, b;
  printf("ingrese os numeros que desea operar");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("ingrese el digito según lo que desea hacer:\n -1 para sumar\n -2 para restar\n -3para hacer una division\n -4 para hacer una multiplicación\n");
  scanf("%d",&c);
  switch(c)
    { 
       case 1:
       c=suma(a,b);
       break;
       
      
       case 1:
       c=resta(a,b);
       break;


       case 1:
       c=division(a,b);
       break;


       case 1:
       c=multiplicacion(a,b);
       break;
    }

  printf("el resultado es:%d",c)  
  return 0;
}

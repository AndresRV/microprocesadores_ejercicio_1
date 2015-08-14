#include <stdio.h>
#include "calculadora.h"

int main(void)
{
	int resultado, valorUno, valorDos;
	
	printf("ingrese los números que desea operar");
	scanf("%d",&valorUno);
	scanf("%d",&valorDos);
	printf("ingrese el dígito según lo que desea hacer:\n -1 para sumar\n -2 para restar\n -3para hacer una division\n -4 para hacer una multiplicación\n");
	scanf("%d",&resultado);
	switch(resultado)
    { 
		case 1:
			resultado=suma(valorUno,valorDos);
			break;
        case 2:
			resultado=resta(valorUno,valorDos);
			break;
		case 3:
			resultado=division(valorUno,valorDos);
			break;
		case 4:
			resultado=multiplicacion(valorUno,valorDos);
			break;
    }
	
	printf("el resultado es:%d",resultado)  
	return 0;
}

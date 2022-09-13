/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Erika Alcon Div 1J
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 harcodear : inicializar?
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2, int* suma);

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int resultado;

	printf("ingrese el primer numero");
	scanf("%d", &numero1);

	printf("ingrese el segundo numero");
	scanf("%d", &numero2);

	suma(numero1, numero2, &resultado);

	printf("el resultado es: %d y el retorno es %d", resultado, suma(numero1, numero2, &resultado));

	return EXIT_SUCCESS;
}
int suma(int num1, int num2, int* suma)
{
	int retorno = -1;

	*suma = num1 + num2;

	if(*suma != 0)
	{
		retorno = 0;
	}

	return retorno;
}

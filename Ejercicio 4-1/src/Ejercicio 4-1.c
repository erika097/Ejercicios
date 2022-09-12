/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Erika Alcon Div 1J
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero();

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int factorial = 1;
	int i;

	numero = pedirNumero();

	for(i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}

	printf("El factorial del numero %d es: %d\n", numero, factorial);

	return EXIT_SUCCESS;
}

int pedirNumero()
{
	int ingresoNumero;
	printf("ingrese un numero: \n");
	scanf("%d", &ingresoNumero);

	return ingresoNumero;
}
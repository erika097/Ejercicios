/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float pedirFloat();

int main(void) {
	setbuf(stdout, NULL);
	float retorno;

	retorno = pedirFloat();
	printf("el numero %.2f retorno con exito", retorno);

	return EXIT_SUCCESS;
}

float pedirFloat()
{
	float numero;
	printf("ingrese un numero decimal");
	scanf("%f", &numero);

	return numero;
}

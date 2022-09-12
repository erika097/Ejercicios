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
#include "operaciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	char operacion;
	int respuesta;

	do{
		printf("ingrese el primer numero entre 10 y 100\n");
		fflush(stdin);
		scanf("%d", &numero1);
	}while(!(numero1 > 9 && numero1 < 101));

	do{
		printf("ingrese el segundo numero entre 10 y 100\n");
		fflush(stdin);
		scanf("%d", &numero2);
	}while(!(numero2 > 9 && numero2 < 101));

	do{
	    printf("ingrese tipo de operacion: s/r (Sumar/restar)\n");
	    fflush(stdin);
	    scanf("%c", &operacion);
	}while(operacion != 's' && operacion != 'r');

	respuesta = sumarRestar(numero1, numero2, operacion);

	printf("el resultado es: %d\n", respuesta);

	return EXIT_SUCCESS;
}

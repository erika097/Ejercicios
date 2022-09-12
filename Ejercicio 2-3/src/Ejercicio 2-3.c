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

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("ingrese un numero");
	scanf("%d", &numero);

	if(numero % 2 == 0)
	{
		printf("\nEl numero ingresado es par");
	}
	else
	{
		printf("\nEl numero ingresado es impar");
	}
	return EXIT_SUCCESS;
}

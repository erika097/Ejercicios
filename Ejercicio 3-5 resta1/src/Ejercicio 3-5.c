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

int restar1(int num1, int num2);
int pedirNumero();


int main(void) {
	setbuf(stdout, NULL);

	int a;
	int b;

	a = pedirNumero();
	b = pedirNumero();

	printf("la resta1 da: %d", restar1( a, b));

	return EXIT_SUCCESS;
}


int restar1(int num1, int num2)
{
	int resta;

	resta = num1 - num2;

	return resta;
}

int pedirNumero()
{
	int ingresoNumero;
	printf("ingrese un numero: ");
	scanf("%d", &ingresoNumero);

	return ingresoNumero;
}

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

void restar3(int a, int b);
int pedirNumero();

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;

	numero1 = pedirNumero();
	numero2 = pedirNumero();

	restar3( numero1, numero2);

	return EXIT_SUCCESS;
}

void restar3(int a, int b)
{
    int resta;

    resta = a - b;

    printf("la resta da: %d", resta);

    return;
}

int pedirNumero()
{
	int ingresoNumero;
	printf("ingrese un numero: ");
	scanf("%d", &ingresoNumero);

	return ingresoNumero;
}

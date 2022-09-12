/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : EA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int suma;
	do{
		printf("ingrese un numero entre -50 y 100: ");
		scanf("%d", &num1);
	}while(!(num1 > -51 && num1 < 101));

	do{
		printf("ingrese otro numero entre -50 y 100: ");
		scanf("%d", &num2);
	}while(!(num2 > -51 && num2 < 101));

	suma = num1 + num2;

	printf("La suma entre %d y %d da como resultado: %d", num1, num2, suma);

	return EXIT_SUCCESS;
}

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

void mostrarNumero(int num);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("ingrese un numero");
	scanf("%d", &numero);

	mostrarNumero(numero);

	return EXIT_SUCCESS;
}

void mostrarNumero(int num)
{
	//num = 10; aqui no importa que numero ingrese, va a mostrar 10

	printf("el numero que ingresaste es: %d", num);

	num = 10; //aqui esta no pasa nada, la funcion va a mostrar en nro que ingrese

	return;//cuando es void puedo no escribir el "return" funciona igual
}

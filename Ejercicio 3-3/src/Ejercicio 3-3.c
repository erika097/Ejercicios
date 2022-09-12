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

int mostrarParOImpar(int a);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int retorno;
	printf("ingrese un numero");
	scanf("%d", &numero);

	retorno = mostrarParOImpar(numero);

	printf("si el numero ingresado es par se mostrara 1 si no 0: %d", retorno);

	return EXIT_SUCCESS;
}

int mostrarParOImpar(int a)
{
	int flag;
	if(a % 2 == 0 )
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	return flag;
}

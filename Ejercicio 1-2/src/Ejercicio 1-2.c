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

	int num1;
	int num2;
	int num3;

	printf("ingrese el primer numero: ");
	scanf("%d", &num1);

	printf("ingrese el segundo numero: ");
	scanf("%d", &num2);

	printf("ingrese el tercer numero: ");
	scanf("%d", &num3);

	if(num1 > num2 && num1 > num3)
	{
		printf("el mayor de los numeros es el primero: %d", num1);
	}
	else
	{
		if(num2 > num3)
	    {
			printf("el mayor de los numeros es el segundo: %d", num2);
	    }
	    else
	    {
	        printf("el mayor de los numeros es el tercero: %d", num3);
	    }
	}
	return EXIT_SUCCESS;
}

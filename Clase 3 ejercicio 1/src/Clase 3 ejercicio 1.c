/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b);
int main(void) {
	setbuf(stdout, NULL);

	int x,y,z;

	printf("ingrese numero a sumar: ");
	scanf("%d",&x);
	printf("ingrese numero a sumar: ");
	scanf("%d",&y);

	z=suma(x,y);
	printf("La suma es %d",z);

	return EXIT_SUCCESS;
}
int suma(int a, int b) //(DESARROLLO)
{
int total;
total=a+b;
return total;
}

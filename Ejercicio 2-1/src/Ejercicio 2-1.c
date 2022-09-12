/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y
 mostrar el promedio de los números. Probar la aplicación con distintos
 valores.
 Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
 Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 //int / int = int
 //float = float / int castear= convertir a otro tipo de dato numerico
 el casteo puede implicar una perdida de informacion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	float promedio;
	int suma;
	int i;

	suma = 0;

	for(i = 0; i < 7; i++)
	{
		do{
			printf("ingrese numeros negativos");
			scanf("%d", &numero);
		}while(numero > -1);

		suma = suma + numero;
	}

	promedio = (float)suma / 7;
	printf("el promedio es: %.2f", promedio);

	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 fflush para limpiar lo ultimo que ingreso el teclado (un enter = \n) que
 es un caracter
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	char seguir;
	float promPositivos;
	float promNegativos;
	int acumuladorPositivos;
	int acumuladorNegativos;
	int contadorPositivos;
	int contadorNegativos;
	int minPositivo;
	int maxNegativo;
	int flagMin;
	int flagMax;

	acumuladorPositivos = 0;
	acumuladorNegativos = 0;
	contadorPositivos = 0;
	contadorNegativos = 0;
	promPositivos = 0;
	promNegativos = 0;
	seguir ='s';
	flagMin = 0;
	flagMax = 0;

	do{
		printf("ingrese numeros enteros");
		scanf("%d", &numero);

		if(numero > 0)
		{
			acumuladorPositivos = acumuladorPositivos + numero;
			contadorPositivos++;
			if(flagMin == 0 || numero < minPositivo)
			{
				minPositivo = numero;
				flagMin = 1;
			}
		}

		if(numero < 0)
		{
			acumuladorNegativos = acumuladorNegativos + numero;
			contadorNegativos++;
			if(flagMax == 0 || numero > minPositivo)
			{
				maxNegativo = numero;
				flagMax = 1;
			}
		}

		printf("desea continuar? s/n");
		fflush(stdin);
		scanf("%c", &seguir);
	}while(seguir == 's');

	promPositivos = (float)acumuladorPositivos / contadorPositivos;
	promNegativos = (float)acumuladorNegativos / contadorNegativos;

	if(contadorPositivos == 0)
	{
		printf("\nNo se ingresaron numeros positivos");
	}
	else
	{
		printf("\nEl promedio de los positivos es %.2f y su minimo es %d", promPositivos, minPositivo);
	}
	if(contadorNegativos == 0)
	{
		printf("\nNo se ingresaron numero negativos");
	}
	else
	{
		printf("\nEl promedio de los negativos es %.2f y su maximo es %d", promNegativos, maxNegativo);
	}
	return EXIT_SUCCESS;
}

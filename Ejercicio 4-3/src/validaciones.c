/*
 * validaciones.c
 *
 *  Created on: 13 sep. 2022
 *      Author: Charvis
 */
#include <stdio.h>
#include <stdlib.h>

int validarOpcion()
{
	int opcion;
	do{
		printf("seleccione una opcion\n");
		printf("1-Convertir de Celsius a Fahrenheit\n");
		printf("2-Convertir de Fahrenheit a Celsius\n");
		fflush(stdin);
		scanf("%d", &opcion);
	}while(opcion != 1 && opcion != 2);

	return opcion;
}

float validarTemperatura(float* temp, int opcion)
{
	float t;

	if(opcion == 1)
	{
		do{
			printf("Ingrese temperatura en Celsius dentro del rango de ebullicion y congelacion\n");
			fflush(stdin);
			scanf("%f", &t);
			*temp = t;
		}while(!(*temp > -1 && *temp < 101));
	}
	else
	{
		do{
			printf("Ingrese temperatura en Fahrenheit dentro del rango de ebullicion y congelacion\n");
			fflush(stdin);
			scanf("%f", &t);
			*temp = t;
		}while(!(*temp > 31 && *temp < 213));
	}
	return *temp;
}

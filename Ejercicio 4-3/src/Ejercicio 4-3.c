/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Erika Alcon Div 1J
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 punto de ebullicion en F: 212°F
 punto de congelacion en F: 32º F
 punto de ebullicon en C: 100 C
 punto de congelacion en C: 0 C					>  <
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "conversiones.h"

int main(void) {
	setbuf(stdout, NULL);

	float temperatura;
	int opcion;

	opcion = validarOpcion();

	validarTemperatura(&temperatura, opcion);

	if(opcion == 1)
	{
		printf("La temperatura en Fahrenheit es: %.2f\n", convertirCelsiusAFahrenheit(temperatura));
	}
	else
	{
		printf("La temperatura en Celsius es: %.2f\n", convertirFahrenheitACelsius(temperatura));
	}

	return EXIT_SUCCESS;
}



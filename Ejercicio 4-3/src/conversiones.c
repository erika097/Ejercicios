/*
 * conversiones.c
 *
 *  Created on: 13 sep. 2022
 *      Author: Charvis
 */
#include <stdio.h>
#include <stdlib.h>

float convertirFahrenheitACelsius(float num)
{
	float celsius;

	celsius = (num - 32) / 1.8;

	return celsius;
}

float convertirCelsiusAFahrenheit(float num)
{
	float fahrenheit;

	fahrenheit = (num * 1.8) + 32;
	;
	return fahrenheit;
}

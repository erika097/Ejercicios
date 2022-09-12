/*
 * operaciones.c
 *
 *  Created on: 10 sep. 2022
 *      Author: Charvis
 */

#include <stdio.h>
#include <stdlib.h>

int sumarRestar(int a, int b, char c)
{
	int resultado;

	if(c == 's')
	{
		resultado = a + b;
	}
	else
	{
		resultado = a - b;
	}

	return resultado;
}

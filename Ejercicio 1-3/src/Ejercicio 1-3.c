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
	int max;
	int min;

	printf("ingrese el primer numero: ");
	scanf("%d", &num1);

	printf("ingrese el segundo numero: ");
	scanf("%d", &num2);

	printf("ingrese el tercer numero: ");
	scanf("%d", &num3);

	if(num1 > num2 && num1 > num3)
	{
		max = num1;
	}
	else
	{
		if(num2 > num3)
		{
			max = num2;
		}
		else
		{
			max = num3;
		}
	}

	if(num1 < num2 && num1 < num3)
	{
		min = num1;
	}
	else
	{
		if(num2 < num3)
		{
			min = num2;
		}
		else
		{
			min = num3;
		}
	}
	printf("el maximo es: %d", max);
	printf("\nel minimo es: %d", min);

	if(num1 != max && num1 != min)
	{
		printf("\nel numero del medio es: %d", num1);
	}
	else
	{
		if(num2 != max && num2 != min)
		{
			printf("\nel numero del medio es: %d", num2);
		}
		else
		{
			if(num3 != max && num3 != min)
			{
				printf("\nel numero del medio es: %d", num3);
			}
			else
			{
				printf("\nno hay numero del medio");
			}
		}
	}
	return EXIT_SUCCESS;
}

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
#define precioLibreta 450
#define precioLibretaMayores 337.5
#define descuento5 0.95
#define descuento10 0.90

int main(void) {
	setbuf(stdout, NULL);

	int legajo;
	char estadoCivil;
	int edad;
	int anioIngreso;
	char genero;
	int contadorPersonasMayores;
	int legajoFemIngresoMin;
	int edadFemIngresoMin;
	int ingresoMin;
	int contadorAlumnos;
	float precioTotalSinDescuento;
	float precioTotalDescuentoMayores;
	float pagoTotalConDescuento;
	int flag;
	char seguir;

	contadorAlumnos = 0;
	contadorPersonasMayores = 0;
	flag = 0;

	do{
		do{
			printf("ingrese el numero de legajo");
			scanf("%d", &legajo);
		}while(!(legajo > 999 && legajo < 10000));

		do{
			printf("ingrese estado civil s/c/v (Soltero/Casado/Viudo)");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v');

		do{
			printf("ingrese edad");
			scanf("%d", &edad);
		}while(edad < 17);

		do{
			printf("ingrese año de ingreso");
			scanf("%d", &anioIngreso);
		}while(anioIngreso < 1950);

		do{
			printf("ingrese genero f/m/o (Femenino/Masculino/No binario)");
			fflush(stdin);
			scanf("%c", &genero);
		}while(genero != 'f' && genero != 'm' && genero != 'o');

		contadorAlumnos++;

		if(edad > 59)
		{
			contadorPersonasMayores++;
		}

		if(genero == 'f')
		{
			if(flag == 0 || anioIngreso < ingresoMin)
			{
				ingresoMin = anioIngreso;
				edadFemIngresoMin = edad;
				legajoFemIngresoMin = legajo;
				flag = 1;
			}
		}

		printf("desea continuar? s/n");
		fflush(stdin);
		scanf("%c", &seguir);
	}while(seguir == 's');

	precioTotalSinDescuento = precioLibreta * contadorAlumnos;

	if(contadorPersonasMayores != 0 && contadorAlumnos > 9)
	{
		precioTotalDescuentoMayores = (precioLibretaMayores * contadorPersonasMayores) + (precioLibreta * (contadorAlumnos - contadorPersonasMayores));
		pagoTotalConDescuento = precioTotalDescuentoMayores * descuento10;
	}
	else
	{
		if(contadorPersonasMayores != 0 && contadorAlumnos > 4)
		{
			precioTotalDescuentoMayores = (precioLibretaMayores * contadorPersonasMayores) + (precioLibreta * (contadorAlumnos - contadorPersonasMayores));
			pagoTotalConDescuento = precioTotalDescuentoMayores * descuento5;
		}
	}

	if(contadorPersonasMayores == 0 && contadorAlumnos > 9)
	{
		precioTotalSinDescuento = precioLibreta * contadorAlumnos;
		pagoTotalConDescuento = precioTotalSinDescuento * descuento10;
	}
	else
	{
		if(contadorPersonasMayores == 0 && contadorAlumnos > 4)
		{
			precioTotalSinDescuento = precioLibreta * contadorAlumnos;
			pagoTotalConDescuento = precioTotalSinDescuento * descuento5;
		}
	}

	if(contadorPersonasMayores == 0)
	{
		printf("\nA-No hay alumnos mayores a 60 años");
	}
	else
	{
		printf("\nA-Cantidad de personas mayores de 60 años: %d", contadorPersonasMayores);
	}
	printf("\nB-El legajo: %d y edad: %d de la mujer que ingreso hace más tiempo.", legajoFemIngresoMin, edadFemIngresoMin);
	printf("\nC-Cuanto debe abonar la facultad por las libretas sin el descuento?: %.2f", precioTotalSinDescuento);
	if(contadorAlumnos > 9)
	{
		printf("\nD-Se aplico un descuento de 10 con un precio final de: %.2f", pagoTotalConDescuento);
	}
	else
	{
		if(contadorAlumnos > 4)
		{
			printf("\nD-Se aplico un descuento de 5 con un precio final de: %.2f", pagoTotalConDescuento);
		}
		else
		{
			printf("\nD-No se aplico un descuento, tiene un precio final de: %.2f", precioTotalSinDescuento);
		}
	}

	return EXIT_SUCCESS;
}

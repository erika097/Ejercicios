/*
 ============================================================================
 Name        : Clase.c
 Author      : Erika Alcon Div 1J
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char mostrarMenu();

int main(void) {
	setbuf(stdout, NULL);

	char confirmacion;
	int flag;
	int flag2;

	flag = 0;
	flag2 = 0;
	confirmacion = 'n';

	do{
		switch(mostrarMenu())
		{
			case 'a':

				printf("Iniciando...\n");
				flag = 1;
				if(flag2 == 1 )
				{
					flag2 = 0;
				}
				break;
			case 'b':

				if(flag == 0)
				{
					printf("Debe Iniciar antes de Procesar\n");

				}
				else
				{
					printf("Procesando...\n");
					flag2 = 1;

				}

				break;
			case 'c':

				if(flag2 == 0)
				{
					printf("Debe Procesar antes de Finalizar\n");

				}else if(flag == 0)
				{
					printf("Debe iniciar antes de Finalizar\n");
				}
				else
				{
					printf("Finalizo con exito\n");
					flag = 0;
					flag2 = 0;

				}

				break;
			case 'd':

				printf("Esta seguro que desea salir? s/n\n");
				fflush(stdin);
				scanf("%c", &confirmacion);

				break;
		}

	}while(confirmacion == 'n');

	return EXIT_SUCCESS;
}

char mostrarMenu()
{
	char opcion;

	printf("a-Iniciar\n");
	printf("b-Procesar\n");
	printf("c-Finalizar\n");
	printf("d-Salir\n");
	fflush(stdin);
	scanf("%c", &opcion);

	return opcion;
}

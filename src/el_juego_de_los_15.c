/*
 ============================================================================
 Name        : el_juego_de_los_15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "calculos_juego.h"

#define LEN_TABLERO 9

int main(void) {
	setbuf(stdout, NULL);

	int arrayTablero[LEN_TABLERO]= {7,5,3,6,2,4,1,8};

	int numeroSeleccionado;

	int juegoFinalizado;

	int indiceEncontrado;

	int valorEncontrado;

	int indicePosNula;

	//iniciarArrayInt(arrayTablero, LEN_TABLERO);

	mostrarArrayInt(arrayTablero, LEN_TABLERO);

	do
	{
		juegoFinalizado=1; // usamos el 1 ahora para indicar que no finalizo el juego y que siga pidiendo numeros

		if(utn_getNumber(&numeroSeleccionado, "\n\n\tSeleccione el numero que quiere mover: ", "Error", 1, 8, 2)==0)
		{
			indiceEncontrado = buscarIndiceArray(arrayTablero, LEN_TABLERO, numeroSeleccionado);

			valorEncontrado = buscarValorArray(arrayTablero, LEN_TABLERO, indiceEncontrado);

			indicePosNula = buscarPosicionNulaArray(arrayTablero, LEN_TABLERO);

			printf("\n\n\tEl indice del numero es: %d\n\tel valor es %d\n\tel 0 esta en:%d", indiceEncontrado, valorEncontrado,indicePosNula);

			// aca se hace el swapeo
			intercambioValoresArray(arrayTablero, LEN_TABLERO, indiceEncontrado, valorEncontrado, indicePosNula);
		}
		else
		{
			// erro 2 veces pero sigue a este cartel mas especifico para que ingrese bien un numero
			printf("\n\n\tDale forro, son 8 numeros, elegi bien!");
		}


		system("cls");
		mostrarArrayInt(arrayTablero, LEN_TABLERO);

	}while(juegoFinalizado);





	return EXIT_SUCCESS;
}

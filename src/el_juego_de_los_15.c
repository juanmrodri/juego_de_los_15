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

#define LEN_TABLERO_FILAS 3
#define LEN_TABLERO_COLUMNAS 3

int main(void) {
	setbuf(stdout, NULL);

	int arrayTablero[LEN_TABLERO_FILAS][LEN_TABLERO_COLUMNAS]={{7,5,3},{6,2,4},{1,8,0}};

	int numeroSeleccionado;

	int juegoFinalizado;

	int indiceEncontrado[2]; // siempre voy a encontrar de a 2

	int indiceFila;

	int indiceColumna;

	int indicePosNulaEncontrado[2];

	int filaPosNula;

	int columnaPosNula;

	int valorEncontrado;

	//iniciarArrayInt(arrayTablero, LEN_TABLERO);

	mostrarArrayInt(arrayTablero,LEN_TABLERO_FILAS,LEN_TABLERO_COLUMNAS);


	do
	{
		juegoFinalizado=1; // usamos el 1 ahora para indicar que no finalizo el juego y que siga pidiendo numeros

		if(utn_getNumber(&numeroSeleccionado, "\n\n\tSeleccione el numero que quiere mover: ", "Error", 1, 8, 2)==0)
		{
			 buscarIndiceArray(arrayTablero, LEN_TABLERO_FILAS ,LEN_TABLERO_COLUMNAS , numeroSeleccionado,indiceEncontrado);

			 indiceFila = indiceEncontrado[0];

			 indiceColumna = indiceEncontrado[1];

			 valorEncontrado = buscarValorArray(arrayTablero, LEN_TABLERO_FILAS ,LEN_TABLERO_COLUMNAS, indiceFila, indiceColumna);

			 buscarPosicionNulaArray(arrayTablero, LEN_TABLERO_FILAS ,LEN_TABLERO_COLUMNAS, indicePosNulaEncontrado);

			 filaPosNula = indicePosNulaEncontrado[0];

			 columnaPosNula = indicePosNulaEncontrado[1];

			 // validamos la posibilidad de swapear

			 if(validarSwapeo(arrayTablero, LEN_TABLERO_FILAS, LEN_TABLERO_COLUMNAS, indiceFila, indiceColumna)==0)
			 {
				 // se puede swapear
				 intercambioValoresArray(arrayTablero, LEN_TABLERO_FILAS ,LEN_TABLERO_COLUMNAS, indiceFila, indiceColumna, valorEncontrado, filaPosNula, columnaPosNula);
			 }
			 else
			 {
				 system("clear");
				 printf("\n\n\tPor favor seleccione una posicion valida");
			 }


		}
		else
		{
			// erro 2 veces pero sigue a este cartel mas especifico para que ingrese bien un numero
			printf("\n\n\tDale loco, son 8 numeros, elegi bien!");
		}

		// aca chequear si se gano!
		if(chequeartableroOrdenado(arrayTablero, LEN_TABLERO_FILAS, LEN_TABLERO_COLUMNAS)==0)
		{
			printf("\n\n\tGanaste!!!\n");
		}

		mostrarArrayInt(arrayTablero,LEN_TABLERO_FILAS,LEN_TABLERO_COLUMNAS);
		//printf("\n\n\tEl indice del numero es fila: %d\n\tEl indice del numero es columna: %d\n\tEl valor de la pos. es: %d", indiceEncontrado[0], indiceEncontrado[1], valorEncontrado);
		//printf("\n\n\tPosicion 0 en fila: %d\n\tPosicion 0 en columna: %d", indicePosNulaEncontrado[0],indicePosNulaEncontrado[1]);

	}while(juegoFinalizado);


	return EXIT_SUCCESS;
}

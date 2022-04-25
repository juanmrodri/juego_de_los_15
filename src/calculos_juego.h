/*
 * calculos_juego.h
 *
 *  Created on: 23 abr 2022
 *      Author: juanm
 */

#ifndef CALCULOS_JUEGO_H_
#define CALCULOS_JUEGO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int iniciarArrayInt(int arrayTablero[], int len);

void mostrarArrayInt(int arrayTablero[][3], int lenFilas, int lenColumnas);

int buscarIndiceArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int numeroABuscar, int indiceEncontrado[]);

int buscarValorArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int indiceFila, int indiceColumna);

int buscarPosicionNulaArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int indicePosNula[]);

int validarSwapeo(int arrayTablero[][3], int lenFilas, int lenColumnas, int filaSeleccionada, int columnaSeleccionada);

int intercambioValoresArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int indiceFila, int indiceColumna, int valorSeleccionado, int filaPosNula, int columnaPosNula);

int chequeartableroOrdenado(int arrayTablero[][3], int lenFilas, int lenColumnas);

#endif /* CALCULOS_JUEGO_H_ */

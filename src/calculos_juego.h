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

int mostrarArrayInt(int arrayTablero[], int len);

int buscarIndiceArray(int arrayTablero[], int len, int numeroABuscar);

int buscarValorArray(int arrayTablero[], int len, int indiceParaValor);

int buscarPosicionNulaArray(int arrayTablero[], int len);

int intercambioValoresArray(int arrayTablero[], int len, int indiceEncontrado, int valorEncontrado, int indiceNulo);


#endif /* CALCULOS_JUEGO_H_ */

/*
 * calculos_juego.c
 *
 *  Created on: 23 abr 2022
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>


/*int iniciarArrayInt(int arrayTablero[][3], int len)
{
	int ret=-1;
	int i;
	int aux;

	if(arrayTablero != NULL && len > 0)
	{
		for(i=0; i<len; i++)
		{
			if(i==len-1) // si es la ultima posicion cargamos un 0 por ahora
			{
				arrayTablero[i]= 0;
				ret=0;
				break;
			}
			ret=0;
			aux = i+1;
			arrayTablero[i]= aux;
		}
	}

	return ret;
}*/

void mostrarArrayInt(int arrayTablero[][3], int lenFilas, int lenColumnas)
{
	int i;
	int j;
	//int tableroMostrado; para hacerlo con do while

	if(arrayTablero != NULL && lenFilas > 0 && lenColumnas > 0)
		{
			for(i=0;i<lenFilas;i++)
			{
				printf("\n\t");
				for(j=0;j<lenColumnas;j++)
				{
					printf("%d ", arrayTablero[i][j]);
				}
				printf("\n");
			}

		}
}

int buscarIndiceArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int numeroABuscar, int indiceEncontrado[])
{
	int ret=-1;
	int i;
	int j;

	if(arrayTablero != NULL && lenFilas > 0 && lenColumnas > 0 && numeroABuscar != 0)
	{
		for(i=0;i<lenFilas;i++)
		{
			for(j=0;j<lenColumnas;j++)
			{
				if(arrayTablero[i][j]==numeroABuscar)
				{
					// esta es la posicion del numero buscado
					ret=0;
					indiceEncontrado[0] = i;
					indiceEncontrado[1] = j; // me llevo los dos indices
					break;
				}
			}
		}
	}
	return ret;
}

int buscarValorArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int indiceFila, int indiceColumna)
{
	int valor;
	int i;
	int j;

	if(arrayTablero != NULL && lenFilas > 0 && lenColumnas > 0)
	{
		for(i=0;i<lenFilas;i++)
		{
			for(j=0;j<lenColumnas;j++)
			{
				if(i==indiceFila && j==indiceColumna)
				{
					valor = arrayTablero[i][j];
				}
			}
		}
	}
	return valor;
}

int buscarPosicionNulaArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int indicePosNula[])
{
	int ret=-1;
	int i;
	int j;

	if(arrayTablero != NULL && lenFilas > 0 && lenColumnas > 0)
	{
		for(i=0;i<lenFilas;i++)
		{
			for(j=0;j<lenColumnas;j++)
			{
				if(arrayTablero[i][j]==0)
				{
					ret=0;
					indicePosNula[0] = i;
					indicePosNula[1] = j;
					break;
				}
			}
		}
	}
	return ret;
}

int intercambioValoresArray(int arrayTablero[], int lenFilas, int lenColumnas, int indiceFila, int indiceColumna, int filaPosNula, int columnaPosNula)
{
	int ret=-1;
	int i;
	int j;
	int aux[2];

	if(arrayTablero != NULL && lenFilas > 0 &&  lenColumnas > 0 && indiceFila>=0 && indiceColumna>=0 && filaPosNula>=0 && columnaPosNula >=0)
	{
		for(i=0;i<lenFilas;i++)
		{
			for(j=0;j<lenColumnas;j++)
			{
				if(arrayTablero[i] == indiceFila && arrayTablero[j]==indiceColumna)
				{
					aux[0] = arrayTablero[i];
					aux[1] = arrayTablero[j];
					arrayTablero[i] = 0;
					arrayTablero[j] = 0;
					arrayTablero[filaPosNula] = aux[0];
					arrayTablero[columnaPosNula] = aux[1];
					ret=0;
				}
			}
		}
	}
	return ret;
}






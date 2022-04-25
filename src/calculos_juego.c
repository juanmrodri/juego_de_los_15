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

int intercambioValoresArray(int arrayTablero[], int len, int indiceEncontrado, int valorEncontrado, int indiceNulo)
{
	int ret=-1;
	int i;
	int aux;

	if(arrayTablero != NULL && len > 0 && indiceEncontrado>=0 && valorEncontrado>0 && indiceNulo>=0)
	{
		for(i=0;i<len;i++)
		{
			if(i == indiceEncontrado)
			{
				aux = arrayTablero[i];
				arrayTablero[i] = 0;
				arrayTablero[indiceNulo] = aux;
			}
		}
	}
	return ret;
}






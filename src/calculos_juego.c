/*
 * calculos_juego.c
 *
 *  Created on: 23 abr 2022
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>


/*int iniciarArrayInt(int arrayTablero[], int len)
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

void mostrarArrayInt(int arrayTablero[], int len)
{
	if(arrayTablero != NULL && len > 0)
		{
			printf("\n\n\t%d %d %d\n\n", arrayTablero[0], arrayTablero[1], arrayTablero[2]);
			printf("\t%d %d %d\n\n", arrayTablero[3], arrayTablero[4], arrayTablero[5]);
			printf("\t%d %d %d", arrayTablero[6], arrayTablero[7], arrayTablero[8]);
		}
}

int buscarIndiceArray(int arrayTablero[], int len, int numeroABuscar)
{
	int indice;
	int i;

	if(arrayTablero != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(arrayTablero[i]==numeroABuscar)
			{
				// esta es la posicion del numero buscado
				indice = i; // me llevo el indice
			}
		}
	}
	return indice;
}

int buscarValorArray(int arrayTablero[], int len, int indiceParaValor)
{
	int valor;
	int i;

	if(arrayTablero != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(i==indiceParaValor)
			{
				valor = arrayTablero[i];
			}
		}
	}
	return valor;
}

int buscarPosicionNulaArray(int arrayTablero[], int len)
{
	int indice;
	int i;

	if(arrayTablero != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(arrayTablero[i]==0)
			{
				indice = i;
			}
		}
	}
	return indice;
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






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

int validarSwapeo(int arrayTablero[][3], int lenFilas, int lenColumnas, int filaSeleccionada, int columnaSeleccionada)
{
	int ret=-1;
	if(arrayTablero != NULL && lenFilas > 0 &&  lenColumnas > 0)
	{	// pos 0,0
		if(filaSeleccionada==0 && columnaSeleccionada==0)
		{
			if(arrayTablero[0][1]==0)
			{
				// el swapeo es posible!
				ret=0;
			}
			else
			{
				if(arrayTablero[1][0]==0)
				{
					// el swapeo es posible!
					ret=0;
				}
				else
				{
					// no se puede realizar el swapeo
					ret=-1;
				}
			}
		}
		else
		{
			// pos 0,1
			if(filaSeleccionada==0 && columnaSeleccionada==1)
			{
				if(arrayTablero[0][0]==0)
				{
					// el swapeo es posible!
					ret=0;
				}
				else
				{
					if(arrayTablero[1][1]==0)
					{
						// el swapeo es posible!
						ret=0;
					}
					else
					{
						if(arrayTablero[0][2]==0)
						{
							// el swapeo es posible!
							ret=0;
						}
						else
						{
							// no se puede realizar el swapeo
							ret=-1;
						}
					}
				}
			}
			else
			{
				// pos 0,2
				if(filaSeleccionada==0 && columnaSeleccionada==2)
				{
					if(arrayTablero[0][1]==0)
					{
						// el swapeo es posible!
						ret=0;
					}
					else
					{
						if(arrayTablero[1][2]==0)
						{
							// el swapeo es posible!
							ret=0;
						}
						else
						{
							// no se puede realizar el swapeo
							ret=-1;
						}
					}
				}
				else
				{
					// pos 1,0
					if(filaSeleccionada==1 && columnaSeleccionada==0)
					{
						if(arrayTablero[0][0]==0)
						{
							// el swapeo es posible!
							ret=0;
						}
						else
						{
							if(arrayTablero[1][1]==0)
							{
								// el swapeo es posible!
								ret=0;
							}
							else
							{
								if(arrayTablero[2][0]==0)
								{
									// el swapeo es posible!
									ret=0;
								}
								else
								{
									// no se puede realizar el swapeo
									ret=-1;
								}
							}
						}
					}
					else
					{
						// pos 1,1
						if(filaSeleccionada==1 && columnaSeleccionada==1)
						{
							if(arrayTablero[1][0]==0)
							{
								// el swapeo es posible!
								ret=0;
							}
							else
							{
								if(arrayTablero[0][1]==0)
								{
									// el swapeo es posible!
									ret=0;
								}
								else
								{
									if(arrayTablero[1][2]==0)
									{
										// el swapeo es posible!
										ret=0;
									}
									else
									{
										if(arrayTablero[2][1]==0)
										{
											// el swapeo es posible!
											ret=0;
										}
										else
										{
											// no se puede realizar el swapeo
											ret=-1;
										}
									}
								}
							}
						}
						// pos 1,2
						if(filaSeleccionada==1 && columnaSeleccionada==2)
						{
							if(arrayTablero[0][2]==0)
							{
								// el swapeo es posible!
								ret=0;
							}
							else
							{
								if(arrayTablero[1][1]==0)
								{
									// el swapeo es posible!
									ret=0;
								}
								else
								{
									if(arrayTablero[2][2]==0)
									{
										// el swapeo es posible!
										ret=0;
									}
									else
									{
										// no se puede realizar el swapeo
										ret=-1;
									}
								}
							}
						}
						// pos 2,0
						if(filaSeleccionada==2 && columnaSeleccionada==0)
						{
							if(arrayTablero[1][0]==0)
							{
								// el swapeo es posible!
								ret=0;
							}
							else
							{
								if(arrayTablero[2][1]==0)
								{
									// el swapeo es posible!
									ret=0;
								}
								else
								{
									// no se puede realizar el swapeo
									ret=-1;
								}
							}
						}
						else
						{
							// pos 2,1
							if(filaSeleccionada==2 && columnaSeleccionada==1)
							{
								if(arrayTablero[2][0]==0)
								{
									// el swapeo es posible!
									ret=0;
								}
								else
								{
									if(arrayTablero[1][1]==0)
									{
										// el swapeo es posible!
										ret=0;
									}
									else
									{
										if(arrayTablero[2][2]==0)
										{
											// el swapeo es posible!
											ret=0;
										}
										else
										{
											// no se puede realizar el swapeo
											ret=-1;
										}
									}
								}
							}
							// pos 2,2
							if(filaSeleccionada==2 && columnaSeleccionada==2)
							{
								if(arrayTablero[2][1]==0)
								{
									// el swapeo es posible!
									ret=0;
								}
								else
								{
									if(arrayTablero[1][2]==0)
									{
										// el swapeo es posible!
										ret=0;
									}
									else
									{
										// no se puede realizar el swapeo
										ret=-1;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return ret;
}

int intercambioValoresArray(int arrayTablero[][3], int lenFilas, int lenColumnas, int indiceFila, int indiceColumna, int valorSeleccionado, int filaPosNula, int columnaPosNula)
{
	int ret=-1;
	int i;
	int j;
	int aux;

	if(arrayTablero != NULL && lenFilas > 0 &&  lenColumnas > 0 && indiceFila>=0 && indiceColumna>=0 && filaPosNula>=0 && columnaPosNula >=0)
	{
		for(i=0;i<lenFilas;i++)
		{
			for(j=0;j<lenColumnas;j++)
			{
				if(arrayTablero[i][j] == valorSeleccionado)
				{
					aux = valorSeleccionado;
					arrayTablero[i][j] = 0;
					arrayTablero[filaPosNula][columnaPosNula] = aux;
					ret=0;
				}
			}
		}
	}
	return ret;
}

int chequeartableroOrdenado(int arrayTablero[][3], int lenFilas, int lenColumnas)
{
	int ret=-1;

	if(arrayTablero!= NULL && lenFilas > 0 &&  lenColumnas > 0)
	{
		if(arrayTablero[0][0]==1 && arrayTablero[0][1]==2 && arrayTablero[0][2]==3 && arrayTablero[1][0]==4 && arrayTablero[1][1]==5 && arrayTablero[1][2]==6 && arrayTablero[2][0]==7 && arrayTablero[2][1]==8 && arrayTablero[2][2]==0)
		{
			// se gano nomas che
			ret=0;
		}
	}

	return ret;
}






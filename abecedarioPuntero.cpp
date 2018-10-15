/*
*Programa: imprimir mediante punteros el abecedario
*Fecha: 30/09/2018
*Creador: Juan Diego Rios Ballesteros
*/
#include <stdio.h>

int main(){
	char letra;
	char *puntero = &letra;	
	for(letra ='a'; letra<='z';letra++){
		printf("%c", *puntero);
	}
	
}

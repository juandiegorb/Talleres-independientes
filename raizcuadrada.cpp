/*
*Programa: raiz cuadradrada de un valor
*Fecha: 05 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <math.h>

//prototipos
float raizCuadrada(float numero);
float valorAbsoluto(float valor);

// funcion raiz cuadrada
float raizCuadrada(float numero){
	float raiz, valor;
	valor = valorAbsoluto(numero);
	raiz = sqrt(valor);
	return raiz;	
}
//funcion valor absoluto
float valorAbsoluto(float valor){
	float valorabs = abs(valor);
	printf("El valor absoluto de %f es: %f\n", valor, valorabs);
	return valorabs;
}

// Funcion princial
int main(){
	int numero;
	float raiz;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	raiz = raizCuadrada(numero);
	printf("La raiz cuadrada es %f", raiz);	
	
}

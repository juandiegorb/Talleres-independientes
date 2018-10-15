/*
*Programa: crear una funcion escalar dado un termino ejemplo(3x^5 + 2x), lo modifica multiplicando por un valor entero
*Fecha: 10/10/2018
*Creador: Juan Diego Rios Ballesteros
*/ 
#include <math.h>
#include <stdio.h>

int main(){
	int valores[10],x;
	int *p_valor, *p_x;
	p_valor = valores;
	p_x = &x;
	printf("Funcion Escalar 3(X)^(Potencias de 1 a 10) + 2(X)\n");
	printf("Ingrese el valor de X: ");
	scanf("%d",&x);
	for(int i = 0; i < 10; i++){
		p_valor[i] = 3 * (pow(*p_x,i+1)) + 2 * (*p_x);
		printf("3(%d)^%d + 2(%d) = %d\n", *p_x, i+1, *p_x, p_valor[i]);
	}	
}


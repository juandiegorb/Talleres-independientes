/*
*Programa: muestra el valor total a pagar de los empleados
*Fecha: 01 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void CalcularPago(float valorHora, int cantidadHora);
void SolicitarInformacion();
void separador();

// Funcion princial
int main(){
	SolicitarInformacion();
}

// Procedimiento para solicitar informacion
void SolicitarInformacion(){
	float valorHora = 0, totalPagar = 0;
	int cantidadHora = 0, i = 1, repeticion = 0;
	printf("Ingrese cuantos empleados van a verificar sus pagos: ");
	scanf("%d", &repeticion);
	do{
		printf("Ingrese el valor de las horas: ");
		scanf("%f", &valorHora);
		printf("Ingrese las cantidad de las horas trabajadas: ");
		scanf("%d", &cantidadHora);
		CalcularPago(valorHora, cantidadHora);
		i++;
	}while(i <= repeticion);	
	getch();
}

// Procedimiento para calcular el pago
void CalcularPago(float valorHora, int cantidadHora){
	float totalPagar = 0;
	totalPagar = valorHora * cantidadHora;
	printf("El total a pagar del empleado es: %0.2f\n", totalPagar);
	separador();
}

void separador(){
	printf("\n---------------------------------------------\n");
}





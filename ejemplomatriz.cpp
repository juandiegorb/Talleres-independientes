/*
* Programa: Uso de Matrices
* Fecha: 18/09/2018
* Elaborado: Juan Diego Rios Ballesteros
*/
#include <stdio.h>
#include <conio.h>

int main(){
	// Llenar matriz
	int f,c;
	int mat[4][4];
	for(f=0; f<4;f++){
		for(c=0; c<4;c++){
			printf("Ingrese los valores de la matriz:");
			scanf("%d", &mat[f][c]);
		};			
	};
	// Mostrar datos ingresados
	for(f=0; f<4;f++){
		for(c=0; c<4;c++){
			printf("Estos son los valores de la matriz: %d",mat[f][c]);
			printf("\n");
		};			
	};
	
	//Mostrar toda la matriz
	printf("Mostrar Matriz:\n");
	for(f=0; f<4;f++){
		for(c=0; c<4;c++){
			printf("%d ",mat[f][c]);			
		};	
		printf("\n");
	};
	printf("Mostrar Matriz desde los valores Diagonal derecha:\n");
	//Mostrar la matriz de forma diagonal	derecha
	for(c=3; c<15;c+=3){
		printf("%i ",mat[0][c]);			
	};	
	//Matriz mostrada en L
	printf("\nMostrar Matriz los valores en L:\n");
	for(f=0; f<4;f++){
		for(c=0; c<4;c++){
			if(c==0){
				printf("%d ",mat[f][c]);
			}
			if(f==3 && c>0){
				printf("%d ",mat[f][c]);
			}				
		};	
	};
	// Matriz mostrada en diagonal y la ultima columna
	printf("\nMostrar Matriz desde los valores Diagonal y la ultima columna:\n");
	for(f=0; f<4;f++){
		for(c=0; c<4;c++){
			if(f==c || c==3){
				printf("%d ",mat[f][c]);
			};						
		};	
	};
	// Matriz mostrada en X
	printf("\nMostrar Matriz en X:\n");
	for(f=0; f<4; f++){
		printf("%d ",mat[f][f]);
		if(4 % 2 != 0){
			if(f != 4 / 2){
				printf("%d ",mat[f][4-1-f]);
			}
		}else{
			printf("%d ",mat[f][4-1-f]);
		}
	};	
	// Mostrar matriz en diagonal y la ultima fila
	printf("\nMostrar Matriz en diagonal y ultima fila:\n");
	for(f=0; f<4;f++){
		for(c=0; c<4;c++){
			if(f==0 && c==3){
				printf("%d ",mat[f][c]);
			}else if(f==1 && c==2){
				printf("%d ",mat[f][c]);
			}else if(f==2 && c==1){
				printf("%d ",mat[f][c]);
			}else if(f==3){
				printf("%d ",mat[f][c]);
			}			   
		};	
	};
	
}

/*
Programa: Libreria string funciones
Fecha: 28/08/2018
Elaborado: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
#include <cstring>
#include <clocale>
#include <string.h>
#include <iostream>

using namespace std;

// Funcion principal
int main(int argc, char *argv[]) {
/*	ejemplo del strlen: Longitud de la cadena	
	char texto[100];
	int longitud = 0;
	printf("Ingrese cualquier texto: ");	
	gets(texto);
	longitud = strlen(texto);
	printf("%d", longitud);
*/
/*	Ejemplo strcpy: Copiar una cadena a otra cadena de texto
	char texto_origen[100];
	char texto_destino[100];
	printf("Ingrese cualquier texto: ");
	gets(texto_origen);
	
	strcpy(texto_destino, texto_origen);
	printf("El texto se ha copiado en otra variable: \n%s", texto_destino);
*/
	
/*	Ejemplo strcmp: Compara cual cadena es mayor o menor 
	char texto_1[100] = "HolA";
	char texto_2[100] = "Hola";
	int resultado; 
	
	resultado = strcmp(texto_1, texto_2);
	printf("%d", resultado);
*/
/* Ejemplo de strcat: Juntar las cadenas de texto
	
	char texto_1[100];
	char texto_2[100];	
	
	printf("Escriba cualquier texto: ");
	gets(texto_1);	
	printf("Otra texto: ");
	gets(texto_2);	
	strcat(texto_1, texto_2);
	
	printf("%s", texto_1);
*/
/*  Ejemplo de strchr: Busca el primer caracter y muestra lo que hay despues del char
	
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = 'w';
	char *ret;	
	ret = strchr(str, ch);	
	printf("String after |%c| is - |%s|\n", ch, ret);	
*/
	
/* ejemplo string strcoll: Compara la longitud para ver cual precede al otro
	char lhs[] = "Army0";
	char rhs[] = "Army0";
	int result;
	result = strcoll(lhs,rhs);
	
	printf("In the current locale ");
	if(result > 0)
		printf("%s precedes %s",rhs,lhs);
	else if (result < 0)
		printf("%s precedes %s" ,lhs ,rhs);
	else
		printf("%s and %s are same",lhs, rhs);
*/	
/* Ejemplo de strcspn: Toma dos cadenas uno donde se busca y otro el cual se va a buscar el cual retorna un valor entero sin firmar
	
	char num[] = "0123456789";
	char code[] = "ceQasieoLPqa4xz10Iyq";	
	size_t result = strcspn(code, num);	
	if (result < strlen(code))
		printf("First occurrence of number in  %s is at position %d",code,result);
	else
		printf("%s does not contain numbers", code);	
*/
/* Ejemplo de strerror: devuelve la descripción textual del código de error del sistema.
	#include <cstring>
	#include <cmath>
	#include <cstdio>
	#include <cerrno>
	#include <iostream>
	
	using namespace std;	
	
	float log_neg = log(-2.5);
	cout << "Log of negative number : " << strerror(errno) << endl;
	
	 example.txt does not exist 
	FILE * fp = fopen("example.txt","r");
	if (fp == NULL)
		cout << "Error opening file : " << strerror(errno) << endl;
*/
/* Ejemplo de strncat: junta dos cadenas pero la segunda cadena decidimos hasta cuantos caracteres agregamos
	char dest[50] = "Using strncat function,";
	char src[50] = " this part is added and this is ignored";
	
	strncat(dest, src, 19);
	
	printf("%s", dest);
*/
/* Ejemplo strncmp: compara entre el tamaño de las 2 cadenas para ver cual es mayor o menor teniendo en cuenta un tamaño maximo de caracteres a contar
	void display(char *lhs, char *rhs, int result, int count);
	void display(char *lhs, char *rhs, int result, int count){
		if(result > 0)
			printf("%s precedes %s", rhs,lhs);
		else if (result < 0)
			printf("%s precedes %s" << lhs, rhs << endl;
		else
			printf("First %d characters of %s and %s are same",count,lhs,rhs);
	}
	char lhs[] = "Armstrong";
	char rhs[] = "Army";
	int result;
	
	result = strncmp(lhs,rhs,3);
	display(lhs,rhs,result,3);
	
	result = strncmp(lhs,rhs,4);
	display(lhs,rhs,result,4);
*/
/* Ejemplo strncpy: copia unos caracteres especificoss desde la fuente de destinacion
	char src[] = "It's Monday and it's raining";
	char dest[40];
	
	// count less than length of src 
	strncpy(dest,src,10);
	printf("%s", dest);
		
	// count more than length of src 
	strncpy(dest,src,strlen(src)+10);
	printf("\n%s", dest);
*/
/* Ejemplo strpbrk: busca en una cadena la informacion ingresada en otra, si hay datos iguales regresa un valor, sino regresa un null
	char digits[] = "0123456789";
	char code[] = "ceQasieoLPqa4xz10Iyq";
	char *pos;
	int count = 0;
	
	pos = strpbrk (code, digits);
	while (pos != NULL)
	{
		pos = strpbrk (pos+1,digits);
		count ++;
	}
	
	printf("There are %d numbers in %s", count, code);
*/
/* Ejemplo de strchr: busca en una cadena un valor a buscar, regresando la posicion donde este el datoa buscar
	char str[] = "Hello World!";
	char ch = 'o';
	char *p = strrchr(str, ch);
	
	if (p)
		printf("Last position of %c in %s is %d", ch, str, p-str);
	else		
		printf("%c is not present %s", ch, str);	
*/
/* Ejemplo strspn: compara de la primera cadena los valores que son iguales en la segunda cadena, regresando un valo numerico
	char src[] = "0123456789";
	char dest[] = "1901262abqs121kfew";
	
	size_t length = strspn(dest, src);
	
	printf("%s contains %d initial numbers", dest, length);	
*/
/* ejemplo strstr: busca una frase objectivo en la cadena a buscar y regresa la posicion donde se encuentra 
	
	char str[] = "Use your brain and heart";
	char target[] = "brain";
	char *p = strstr(str, target);
	
	if (p)
		printf("'%s' is present in %s at position %d", target, str, p-str);
	
	else
		printf("%s is not present %s", target, str);
*/
/* Ejemplo strtok:  devuelve el token en una cadena de bytes antes del dato a buscar
	
	char str[] = "parrot,owl,sparrow,pigeon,crow";
	char delim[] = ",";
	printf("The tokens are:\n");
	char *token = strtok(str,delim);
	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL,delim);
	}	
*/
	/* ejemplo strxfrm: transforma una cadena de bytes dada por nulo dada en una forma definida de implementación.
	setlocale(LC_COLLATE, "cs_CZ.UTF-8");
	const char* s1 = "hrnec";
	const char* s2 = "chrt";
	char t1[20], t2[20];
	
	cout << "strcoll returned " << strcoll(s1,s2) << endl;
	cout << "Before transformation, " << "strcmp returned " << strcmp(s1,s2) << endl;
	
	strxfrm(t1,s1,10);
	strxfrm(t2,s2,10);
	cout << "After transformation, " << "strcmp returned " << strcmp(t1,t2) << endl;
	*/
 //ejemplo memchr: busca la primera aparición de un carácter en un número específico de caracteres.
	char ptr[] = "This is a random string";
	char ch = 'r';
	int count = 15;
	
	if (memchr(ptr,ch, count))
		cout << ch << " is present in first " << count << " characters of \"" << ptr << "\"";
	else
		cout << ch << " is not present in first " << count << " characters of \"" << ptr << "\"";
	
	
/* memcmp compara una cantidad específica de caracteres de dos objetos de puntero
	void display(char *lhs, char *rhs, int result, int count)
	{
		if(result > 0)
			cout << rhs << " precedes " << lhs << endl;
		else if (result < 0)
			cout << lhs << " precedes " << rhs << endl;
		else
			cout << "First " << count << " characters of " << lhs << " and " << rhs << " are same" << endl;
	}
	
	char lhs[] = "Hello World!";
	char rhs[] = "Hello Earth!";
	int result;
	
	result = memcmp(lhs, rhs, 5);
	display(lhs, rhs, result, 5);
	
	result = memcmp(lhs, rhs, 7);
	display(lhs, rhs, result, 7);
	*/
	
/* ejemplo memcpy: copia un número específico de datos desde el origen hasta el destino.
	int arr[10] = {8,3,11,61,-22,7,-6,2,13,47};
	int new_arr[5];
	
	memcpy(new_arr,arr,sizeof(int)*5);
	cout << "After copying" << endl;
	for (int i=0; i<5; i++)
		cout << new_arr[i] << endl;
	*/
/* ejemplo memmove: copia un número específico de datos desde el origen hasta el destino	
	int arr[10] = {8,3,11,61,-22,7,-6,2,13,47};
	int *new_arr = &arr[5];
	
	memmove(new_arr,arr,sizeof(int)*5);
	
	cout << "After copying" << endl;
	for (int i=0; i<10; i++)
		cout << arr[i] << endl;
	*/
/* ejemplo memset: copia un único carácter por un número específico de tiempo a un objeto.
	char dest[50];
	char ch = 'a';
	memset(dest, ch, 20);
	
	cout << "After calling memset" << endl;
	cout << "dest contains " << dest; 
*/
	
	return 0;

}


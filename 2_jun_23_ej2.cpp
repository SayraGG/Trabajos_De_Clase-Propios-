// Desarrolle un programa que diga si un numero es mayor, menor o igual a cerocon la funcion si simple
#include<stdio.h>
int main()
{
	float num;
	puts("Ingresa un numero:");
	scanf("%f",&num);
	if(num>0) {
	puts("El numero es mayor a cero");	
	}
	if (num<0){
	puts("El numero es menor a cero");	
	}
	if (num==0){
	puts("El numero es igual a cero");	
	}
	return 0;
}

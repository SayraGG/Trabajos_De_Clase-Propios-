/* Programa num6
Título: La sentencia de asignacion booleana 
fecha: 31/may/23
Nombre: Sayra González García*/
#include<stdio.h>

int main()
{
	int edad, mayordeedad, juvenil, menordeedad;
	scanf("%i",&edad);
	mayordeedad=(edad>18);
	juvenil=(edad>15)&&(edad<=18);
	menordeedad=(edad<15);
	printf("%i \n", menordeedad);
	printf("%i \n",mayordeedad);
	printf("%i \n", juvenil);
	return 0;
}

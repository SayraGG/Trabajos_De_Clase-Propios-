/* programa numero: 3
Titulo: Comportamiento o funcionamiento de una sentencia(bucle) while
fecha: 6/junio/2023
Nombre: Sayra González García 
Funcionamiento: El programa imprime el contador mientras sea menor a 100, pero va restando 1 al contador, pero es infinito el bucle
*/
#include<stdio.h>
int main()
{
	int contador=0; //inicializa la variable
	while (contador<5) //prueba logica
	{
		contador++; // si es verdadero realiza el bloque de instrucciones
		printf("contador: %d \n", contador);
	}
	printf("Terminado.contador: %d \n", contador);
	
}

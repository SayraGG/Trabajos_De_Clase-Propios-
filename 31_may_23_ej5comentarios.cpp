/* Programa num6
T�tulo: comentarios 
fecha: 31/may/23
Nombre: Sayra Gonz�lez Garc�a*/
// n++ Postincremento despues de la variable
//ej n=1 n=2
// ++n Preincremento signo antes de la variable
// ej 1+n= 1+1
#include<stdio.h>

int main()
{
	int n=5, t;
	t= ++n * --n; //Preincremento signo antes de la variable
	printf("n= %d, t=%d\n",n, t);
	printf("%d %d %d\n", ++n, ++n,++n);
	return 0;
}
	

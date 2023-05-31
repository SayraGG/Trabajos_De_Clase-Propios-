/* Programa num3
Título: Diferencia de operadores
fecha: 31/may/23
Nombre: Sayra González García*/
#include<stdio.h>

int main()
{
	int m=99, n;
	n= ++m;
	printf("m= %d, n=%d\n", m,n);
	n= ++m;
	printf("m= %d, n=%d\n", m,n);
	printf("m= %d\n",m++);
	printf("m= %d\n",++m);
	return 0;
}
	


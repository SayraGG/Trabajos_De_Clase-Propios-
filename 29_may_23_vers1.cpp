#include <stdio.h>
int minumero;
int main ()
{
	int j;
	j=2;
	printf("Cual es su numero favorito: ");
	scanf("%d", &minumero);
	int numerodeinteracciones=6;
	int i;
	for(i=1; i<numerodeinteracciones; i++){
		printf("iteraccion numero : %d\n",i*j);
	}
	printf("Cuanto vale aqui la variable i: %d\n",i);
	printf("Cuanto vale aqui la variable minumero: %d\n",minumero);
	printf("Cuanto vale aqui la variable numero de interacciones: %d\n",numerodeinteracciones);
	return 0;
}

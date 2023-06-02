// Variante del ejercicio de ayer
#include<stdio.h>
int main()
{
	int dividendo, divisor, residuo, resultado;
	puts ("Ingrese el dividendo: ");
	scanf("%d", &dividendo);
	puts("Ingrese el divisor: ");
	scanf("%d", &divisor);
	resultado=dividendo/divisor;
	residuo=dividendo % divisor;
	if(residuo==0)
	{
	puts ("El numero si es divisible \n");	
	}
	else {
	puts("El numero no es divisible  \n");
	}
	printf("El residuo es: %d \n",residuo);
	return 0;	
}

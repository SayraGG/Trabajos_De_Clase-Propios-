//numero divisor
#include<stdio.h>
int main()
{
	int dividendo, divisor, residuo, resultado;
	printf ("Ingrese el dividendo: ");
	scanf("%d", &dividendo);
	printf ("Ingrese el divisor: ");
	scanf("%d", &divisor);
	resultado=dividendo/divisor;
	residuo=dividendo % divisor;
	if(residuo==0)
	{
	printf ("El numero se puede dividir");	
	}
	else {
	printf("El numero no se puede dividir \n");
	}
	printf("El dividendo es: %d\n", dividendo);
	printf("El divisor es: %d\n", divisor);
	printf("El residuo es: %d \n", residuo);
	printf("El resultado es: %d \n", resultado);
	
	
	
	
	
}

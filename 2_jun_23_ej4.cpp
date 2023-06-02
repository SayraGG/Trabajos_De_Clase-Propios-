// Calcular el mayor de dos numeros leidos desde el teclado y visualizarlos utilizando el si simple
#include<stdio.h>
int main()
{
	float num1, num2;
	puts("Ingresa el numero dos numeros : ");
	scanf("%f", &num1);
	scanf("%f", &num2);
	if(num1>num2)
	{
		puts("El numero 1 es mayor y es: ");
		printf("%.2f",num1);
	}
	else 
	{
	puts ("El numero dos es mayor y es: ");
	printf("%.2f",num2);
	}
return 0;	
}

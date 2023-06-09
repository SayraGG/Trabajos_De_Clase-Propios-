#include<stdio.h>
int main()
{
	char opcion;
	do{
	puts("Hola");
	puts("Desea otro tipo de saludo?");
	printf("y a continuacion pulse into: ");
	scanf("%s", &opcion);
	}
	while (opcion == 's' || opcion =='S');
		puts("Adios");
	
	return 0; 
}

#include<stdio.h>
int main ()
{
	const int luna=238857;
	float luna_kilo;
	printf("Distancia a la luna %d millas\n", luna);
	luna_kilo=luna*1.609;
	printf("En kilometros es %2.f km \n", luna_kilo);
	return 0;
}

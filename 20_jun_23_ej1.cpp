/*Programa numero: 1
titulo:
Fecha:20/06/2023
Nombre: Sayra Gonzalez Garcia*/

#include<stdio.h>
float area_rectangulo( float b, float a);
float entrada(void);
int main()
{
	float b, h;
	printf("\n Base del rectangulo: ");
	b= entrada();
	printf("\n Altura del rectangulo: ");
	h= entrada();
	printf("\n Area del rectangulo %.2f, area", area_rectangulo(b,h));
	return 0;
}
float entrada()
{
	float m;
	do
	{
		scanf("%f",&m);
	}
	while (m<=0.0);
	return m;
}
float area_rectangulo(float b, float a){
	return (b*a);
}

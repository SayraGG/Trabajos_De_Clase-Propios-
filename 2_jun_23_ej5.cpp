//Funciona para potencias 
#include<stdio.h>
#include<math.h>
int main ()
{
	float f,x;
	printf("\n Elige un valor de x:");
	scanf("%f",&x);
	if(x<=0.0)
	{ 
	f= -pow(x,2) - x;
	} 
	else

	f= -pow(x,2) +3*x;
	printf("f(%.1f) = %.3",x,f);
	
}


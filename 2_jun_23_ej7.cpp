#include<stdio.h>
int main()
{
	float num;
	puts("Ingresa un numero:");
	scanf("%f",&num);
	if(num>0) {
	puts("El numero es mayor a cero");
	printf("%f", num+1);	
	}
	else
	if (num<0){
	puts("El numero es menor a cero");
	printf("%f", num-1);		
	}
	if (num==0){
	puts("El numero es igual a cero");	
	printf("%f", num+10);	
	}
	return 0;
}

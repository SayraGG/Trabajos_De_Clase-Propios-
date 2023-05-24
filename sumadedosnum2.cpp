// sumar, restar, dividir en lugar de num letras
#include<stdio.h>
int main()
{
	int num1, num2, suma, resta, mult, op;
	printf("Ingrese el numero 1: ");
	scanf("%i", &num1);
	printf("Ingrese el numero 2: ");
	scanf("%i", &num2);
	
	printf("Elija la opcion 1:suma, 2:resta, 3:Multiplicacion : \n ");
	scanf("%i",&op);
	switch (op){

	case 1:
	suma=num1+num2;
	printf("El resultado de la suma es  es:  %d \n", suma);	
	break;
	
    case 2: 
	resta=num1-num2;
    printf("El resultado de la resta es  es:  %d \n ", resta);
    break;
    
	case 3: 
	mult=num1*num2;
    printf("El resultado de la multiplicacion  es  es:  %d \n ", mult);
    break;
}
	return 0;
	
}

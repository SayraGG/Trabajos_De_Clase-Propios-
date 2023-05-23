#include<stdio.h>
int main()
{
   float salario, descuento, bono, salariob, desc, bo, desc1;
   int op, vec;
   vec=1;
   printf("Escribe el salario: $");
   scanf("%f", &salario);
   printf("introduce un numero de acuerdo a lo que deseas realizar: 1-Descuento , 2-Bono, 3-Salario bruto: ");
   scanf("%i", &op);   
   switch (op)
   {
	 case 1:
       desc=(salario*0.10);
       desc1=salario-desc;
       printf("El salario con descuento es de: $ %f", desc1);
     break;
    
	 case 2: 
        bo=(salario*.15);
        bono=salario+bo;
        printf("El salario con bono es de: $%f",bono);
     break;
    
	 case 3: 
	   bo=(salario*.15);
        salariob=salario+bo;
        printf("El salario bruto es de: $%f",salariob);
     break;
    
	 default: printf( "Error" );
	 
   }
  return 0; 
}

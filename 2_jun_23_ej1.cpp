/* programa que solicite una calificacion obtenida entre 1_10 y evalue si es mayor a 6 mande un mensaje de aprobado*/
#include<stdio.h>
int main()
{
float calificacion;
puts("Ingresa la calificacion: ");
scanf("%f",&calificacion);
if(calificacion>5){
puts("Aprobaste :)");	
}
return 0;
}
 

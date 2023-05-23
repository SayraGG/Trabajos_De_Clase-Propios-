#include <iostream>
#include<stdio.h>
int main ()
{
    char alumnos [5];
    float calificacion;
}materia[6]={{"Materia 1: ",0},{"Materia 2: ",0},{"Materia 3: ",0},{"Materia 4: ",0},{"Materia 5: ",0},{"Materia 6: ",0}};

int main(){
    float suma=0,promedio;
    printf("Ingresa las calificaciones de cada materia:\n";)
    for (int i = 0; i < 6; i++)
    {
       printf ("Calificacion de "<<materia[i].nombre<<": )";
        scanf ("%d" materia[i],calificacion);
    }
    for (int i = 0; i < 6; i++)
    {
        suma=suma+materia[i].calificacion;
    }
    promedio=suma/6;
    printf ("Promedio: "<<promedio<<"\n");
    if(promedio<=5.9)
    {
        printf (":(\n");
    }
    if(promedio>=6 && promedio<=6.9)
    {
        printf (":/.\n");
    }
    if(promedio>=7 && promedio<=8.9)
    {
        printf (":).\n");
    }
    if(promedio>=9 && promedio<=10)
    {
        printf (":).\n")
    }
    if(promedio>10)
    {
        printf (":).\n");
    }
    system("pause");
    return 0;
}
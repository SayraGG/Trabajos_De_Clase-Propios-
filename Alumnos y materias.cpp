// 5  alumnos 6 materias y calcular promedios agra

#include <stdio.h>

int main ()
{    
    int i, j;
    float nota;
    float prome = 0;
    
    for(j=1; j<6; j++){
    printf("\nAlumno: %d\n",j);
    for (i=1; i <=6 ; i++)
    {
        printf("Ingrese la calificacion: " );
        scanf("%f: ",&nota);
        prome += nota;
    }
    prome = prome/5;
    printf("El promedio es de:%.2f\n",prome);
    }
    return 0;
}

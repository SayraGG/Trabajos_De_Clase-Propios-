//Determinar y visualizar el numero mas grande de dos numeros mediante una funcion, la cual debe de pasar los parametros por referencia

#include <stdio.h>

void encontrarMayor(int* num1, int* num2) {
    if (*num1 > *num2) {
        printf("El numero más grande es: %d\n", *num1);
    } else {
        printf("El numero más grande es: %d\n", *num2);
    }
}

int main() {
    int numero1, numero2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    
    encontrarMayor(&numero1, &numero2);
    
    return 0;
}




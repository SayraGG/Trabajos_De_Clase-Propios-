// Escribir una funcion logica de de dos argumentos enteros que devuelva verdaderosi el primero divide al segundo y falso en caso contrario

#include <stdio.h>
#include <stdbool.h>

bool verificaDivision(int num1, int num2) {
    if (num2 % num1 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero1, numero2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    
    if (verificaDivision(numero1, numero2)) {
        printf("%d divide a %d\n", numero1, numero2);
    } else {
        printf("%d no divide a %d\n", numero1, numero2);
    }
    
    return 0;
}


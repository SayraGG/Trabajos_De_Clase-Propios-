//Calcular la suma con una serie de números leídos por teclado hasta que el número sea igual a menos uno
#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    
    printf("Ingrese una serie de numeros (ingrese -1 para terminar):\n");
    
    do {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        
        if (numero != -1) {
            suma += numero;
        }
    } while (numero != -1);
    
    printf("La suma de los numeros ingresados es: %d\n", suma);
    
}

// Derminar si un numero dado leido del teclado es primo o no repitiendo la operacion un numero de veces determinado repitiendo la operacion por otro numero asignado por teclado
#include <stdio.h>

int isPrime(int n);

int main() {
    int num, repeticiones, i, resultado;


    printf("Ingresa el numero de repeticiones: ");
    scanf("%d", &repeticiones);

    for (i = 0; i < repeticiones; i++) {
        resultado = isPrime(num);
        printf("Ingresa un numero: ");
    scanf("%d", &num);

        if (resultado == 1) {
            printf("%d el numero es primo\n", num);
        } else {
            printf("%d el numero no es primo\n", num);
        }
    }

    return 0;
}

int isPrime(int n) {
    int i;

    if (n == 1) {
        return 0;
    }

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

}

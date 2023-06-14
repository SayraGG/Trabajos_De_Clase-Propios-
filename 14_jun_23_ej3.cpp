// Derminar si un numero dado leido del teclado es primo o no repitiendo la operacion por bandera
#include <stdio.h>

int main() {
    int num, i, bandera = 1;
    while (bandera) {
        printf("Ingrese un numero (-1 para terminar): ");
        scanf("%d", &num);
        if (num == -1) {
            bandera = 0; // Cambia el valor de la bandera para salir del bucle
        } else {
            int es_primo = 1;
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    es_primo = 0; // Si el número es divisible por i, no es primo
                    break; // Salir del bucle porque ya sabemos que no es primo
                }
            }
            if (es_primo) {
                printf("%d es un numero primo.\n", num);
            } else {
                printf("%d no es un numero primo.\n", num);
            }
        }
    }
    printf("Se ha introducido la bandera. Saliendo del programa.\n");
    return 0;
}

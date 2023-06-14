// Derminar si un numero dado leido del teclado es primo o no repitiendo la operacion por centinela
#include <stdio.h>

int main() {
    int n;
    printf("Introduce un numero entero positivo (para salir introduce un número negativo): ");
    scanf("%d", &n);

    while (n >= 0) {
        int i, es_primo = 1;

        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                es_primo = 0; // no es primo
                break;
            }
        }

        if (es_primo) {
            printf("%d es primo\n", n);
        } else {
            printf("%d no es primo\n", n);
        }

        printf("Introduce otro numero entero positivo (para salir introduce un número negativo): ");
        scanf("%d", &n);
    }
}

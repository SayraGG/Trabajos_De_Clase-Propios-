// suma de los primeros 50 numeros enteros
#include <stdio.h>

int main() {
    int i, suma = 0;

    for (i = 1; i <= 50; i++) {
        suma += i;
    }

    printf("La suma de los numeros es : %d\n", suma);
}

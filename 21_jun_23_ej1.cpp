//Programa con arreglo
#include <stdio.h>

int main() {
   int arreglo[10] = {7, 13, 21, 6, 8, 3, 9, 3, 7, 1}; // declaración del arreglo con sus elementos
   int suma = 0; // variable para almacenar la suma
   int mayor = arreglo[0]; // variable para almacenar el mayor valor, se inicializa con el primer elemento del arreglo

   // Impresión del arreglo
   printf("Arreglo: ");
   for(int i = 0; i < 10; i++) {
      printf("%d ", arreglo[i]);
   }
   printf("\n");

   for(int i = 0; i < 10; i++) {
      suma += arreglo[i];
   }

   for(int i = 1; i < 10; i++) {
      if(arreglo[i] > mayor) {
         mayor = arreglo[i];
      }
   }
   printf("Suma: %d \n", suma);
   printf("Mayor: %d \n", mayor);

}

//Escribir y ejecutar un programa que imprima su nombre y direccion, por medio dee una funcion que se llame mostrar datos, nombre debera pasar parametros por valor y direccion por referencia ingresados desde el teclado

#include <stdio.h>

void mostrarDatos(const char* nombre, char* direccion) {
    printf("Nombre: %s\n", nombre);
    printf("Direccion: %s\n", direccion);
}

int main() {
    char nombre[100];
    char direccion[100];
    
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    
    printf("Ingrese su direccion: ");
    scanf("%s", direccion);
    
    mostrarDatos(nombre, direccion);
    
    return 0;
}


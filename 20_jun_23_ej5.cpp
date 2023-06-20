#include <stdio.h>
#include <math.h>

double suma(const double a[], const int n)
{
    int i;
    double s = 0.0;
    for(i = 0; i < n; i++)
        s += a[i];
    return s;
}

int main()
{
    double array[] = {1.5, 2.7, 3.2, 4.8, 5.1};
    int size = sizeof(array) / sizeof(array[0]);

    double resultado = suma(array, size);
    printf("El resultado de la suma es: %.2f\n", resultado);

    return 0;
}



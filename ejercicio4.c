#include <stdio.h>

int main() {
    int arreglo[10];
    int suma = 0;
    float promedio;

    for(int i = 0; i < 10; i++) {
        printf("Ingrese un valor numérico: ");
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    promedio = suma / 10.0;

    printf("La suma de los valores es: %d\n", suma);
    printf("El promedio de los valores es: %.2f\n", promedio);

    return 0;
}

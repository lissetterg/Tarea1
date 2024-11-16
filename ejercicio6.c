#include <stdio.h>

int main() {
    int arreglo[10];
    int suma = 0;
    int contador = 0;
    float promedio;

    for(int i = 0; i < 10; i++) {
        printf("Ingrese un valor numérico: ");
        scanf("%d", &arreglo[i]);
        if(arreglo[i] >= 5 && arreglo[i] <= 2500) {
            suma += arreglo[i];
            contador++;
        }
    }

    if(contador > 0) {
        promedio = suma / (float)contador;
    } else {
        promedio = 0;
    }

    printf("El promedio de los valores entre 5 y 2500 es: %.2f\n", promedio);

    return 0;
}

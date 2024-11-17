#include <stdio.h>

int main() {
    int arreglo[20];
    int suma_pares = 0;
    long long producto_impares = 1; 
    for(int i = 0; i < 20; i++) {
        printf("Ingrese un valor numérico: ");
        scanf("%d", &arreglo[i]);
        if(arreglo[i] % 2 == 0) {
            suma_pares += arreglo[i];
        } else {
            producto_impares *= arreglo[i];
        }
    }

    printf("La suma de los números pares es: %d\n", suma_pares);
    printf("El producto de los números impares es: %lld\n", producto_impares);

    return 0;
}

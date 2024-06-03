#include <stdio.h>

int main() {
    int numeros[10];
    int sumaPares = 0;
    int cantidadPares = 0;
    float mediaPares;

    
    printf("Introduce 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            sumaPares += numeros[i];
            cantidadPares++;
        }
    }

    if (cantidadPares > 0) {
        mediaPares = (float)sumaPares / cantidadPares;
        printf("La suma de los números pares es: %d\n", sumaPares);
        printf("La cantidad de números pares es: %d\n", cantidadPares);
        printf("La media aritmética de los números pares es: %.2f\n", mediaPares);
    } else {
        printf("No se introdujeron números pares.\n");
    }

    return 0;
}
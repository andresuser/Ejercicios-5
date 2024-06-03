#include <stdio.h>

int main() {
    int lista[50];
    int suma = 0;

    
    printf("Introduce los 50 elementos de la lista:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &lista[i]);
    }

    
    for (int i = 0; i < 50; i++) {
        suma += lista[i];
    }

    
    printf("La suma de los miembros de la lista es: %d\n", suma);

    return 0;
}
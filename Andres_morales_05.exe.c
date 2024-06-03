#include <stdio.h>
#include <stdbool.h>

int main() {
    int matriz[3][3];
    int sumaFilas[3] = {0, 0, 0};
    int sumaColumnas[3] = {0, 0, 0};
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;
    bool esCuadradoMagico = true;

    
    printf("Introduce los valores de la matriz de 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
            if (i == j) {
                sumaDiagonalPrincipal += matriz[i][j];
            }
            if (i + j == 2) {
                sumaDiagonalSecundaria += matriz[i][j];
            }
        }
    }

    
    int sumaReferencia = sumaFilas[0]; 
    for (int i = 1; i < 3; i++) {
        if (sumaFilas[i] != sumaReferencia || sumaColumnas[i] != sumaReferencia) {
            esCuadradoMagico = false;
            break;
        }
    }
    if (sumaDiagonalPrincipal != sumaReferencia || sumaDiagonalSecundaria != sumaReferencia) {
        esCuadradoMagico = false;
    }

    
    if (esCuadradoMagico) {
        printf("La matriz es un cuadrado mágico.\n");
    } else {
        printf("La matriz no es un cuadrado mágico.\n");
    }

    return 0;
}
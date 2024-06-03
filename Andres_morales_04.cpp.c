#include <stdio.h>

int main() {
    int M[6][7] = { /* Aquí irían los 6x7 elementos de la matriz M */ };
    int traspuesta[7][6];

    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            traspuesta[j][i] = M[i][j];
        }
    }

    
    printf("Matriz traspuesta de la matriz M:\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", traspuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int filas = 4;
    int columnas = 5;

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            printf("[F%d,C%d] ", i, j);
        }
        printf("\n");
    }

    return 0;
}
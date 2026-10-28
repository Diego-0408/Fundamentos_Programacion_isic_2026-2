#include <stdio.h>

int main () {
    float precio = 1;     
    float total = 0;       

    while (precio != 0) {
        printf("Ingresa el precio del producto (0 para salir): ");
        scanf("%f", &precio);

        if (precio != 0) {
            total += precio;
            printf("Total acumulado: %.2f pesos\n\n", total);
        }
    }
    
    printf("\n¡Corte de caja! El total final a pagar es: %.2f pesos\n", total);

    return 0;
}
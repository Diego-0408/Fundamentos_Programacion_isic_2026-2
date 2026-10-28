#include <stdio.h>
int main() {
    float montoTotal, montoDescuento, montoFinal;
    printf("Ingrese el monto total de la compra: ");
    scanf("%f", &montoTotal);
    printf("Cuenta con membresia? (1: Si, 0: No): ");
    scanf("%f", &montoDescuento);

    if (montoDescuento == 1) {
        montoFinal = montoTotal * 0.9; // Aplicar descuento del 10%
        printf("Monto final con descuento: %.2f\n", montoFinal);
    } else if (montoDescuento == 0) {
        montoFinal = montoTotal; // No hay descuento
        printf("Monto final sin descuento: %.2f\n", montoFinal);
    } else {
        printf("Opcion invalida.\n");
    }
    return 0;
}
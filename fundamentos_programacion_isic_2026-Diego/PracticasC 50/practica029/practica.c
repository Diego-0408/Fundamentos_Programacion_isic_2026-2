#include <stdio.h>
int main() {
    float montoTotal;
    int membresia;
    printf("Ingrese el monto total de su compra: ");
    scanf("%f", &montoTotal);
    printf("Cuenta con la membresia? (1=si, 0=no): ");
    scanf("%d", &membresia);

    if (membresia == 1) {
        if (montoTotal > 2000) {
            montoTotal = montoTotal * 0.75; // Aplicar descuento del 25%
        }
        if (montoTotal <= 2000) {
            montoTotal = montoTotal * 0.85; // Aplicar descuento del 15%
        }
    }
    else {
        if (montoTotal > 2000) {
            montoTotal = montoTotal * 0.90; // Aplicar descuento del 10%
        }
        if (montoTotal <= 2000) {
            montoTotal = montoTotal; // No se aplica descuento
        }
    }
    printf("El monto total a pagar es: %.2f\n", montoTotal);

    return 0;
}
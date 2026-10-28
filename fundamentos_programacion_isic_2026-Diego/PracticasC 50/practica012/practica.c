#include <stdio.h>

int main() {
    float precio, billete, cambio;
    int cantidad;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    printf("Ingrese la cantidad comprada: ");
    scanf("%d", &cantidad);

    printf("Ingrese la denominacion del billete: ");
    scanf("%f", &billete);

    cambio = billete - (cantidad * precio);

    printf("El cambio a devolver es: %.2f\n", cambio);

    return 0;
}
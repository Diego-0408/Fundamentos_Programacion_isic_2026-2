#include <stdio.h>

int main () {
    int edad;
    float ingresoMensual;
    int historialCrediticio;

    printf("Asignacion de tarjetas de credito\n");
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese su ingreso mensual: ");
    scanf("%f", &ingresoMensual);
    printf("Cuenta con un buen historial crediticio?(1: Si, 0 : No)");
    scanf("%d", &historialCrediticio);

    if (edad >= 18 && ingresoMensual >= 12000 && historialCrediticio == 1) {
        printf("Usted es apto para recibir el credito");
    }
    else {
        printf("Usted no es apto para recibir el credito");
    }
return 0;
}
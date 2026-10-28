#include <stdio.h>

int main() {
    int nipCorrecto = 1234;
    int nipIngresado;
    int intentos = 0;
    int acceso = 0;

    while (intentos < 3 && acceso == 0) {
        printf("Ingrese su NIP: ");
        scanf("%d", &nipIngresado);

        if (nipIngresado == nipCorrecto) {
            acceso = 1;
        } else {
            intentos++;
            printf("NIP incorrecto. Intentos restantes: %d\n", 3 - intentos);
        }
    }

    if (acceso == 1) {
        int opcion;
        float saldo = 5000.0;
        float cantidad;

        do {
            printf("\n--- MENU BANCARIO ---\n");
            printf("1. Consultar saldo\n");
            printf("2. Depositar dinero\n");
            printf("3. Retirar dinero\n");
            printf("4. Salir\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion);

            if (opcion == 1) {
                printf("Su saldo actual es: %.2f pesos\n", saldo);
            } else if (opcion == 2) {
                printf("Ingrese la cantidad a depositar: ");
                scanf("%f", &cantidad);
                saldo += cantidad;
                printf("Deposito exitoso.\n");
            } else if (opcion == 3) {
                printf("Ingrese la cantidad a retirar: ");
                scanf("%f", &cantidad);
                if (cantidad <= saldo) {
                    saldo -= cantidad;
                    printf("Retiro exitoso.\n");
                } else {
                    printf("Fondos insuficientes.\n");
                }
            } else if (opcion == 4) {
                printf("Gracias por utilizar el sistema.\n");
            } else {
                printf("Opcion invalida.\n");
            }
        } while (opcion != 4);
    } else {
        printf("Acceso denegado. Tarjeta bloqueada por exceder los intentos.\n");
    }

    return 0;
}
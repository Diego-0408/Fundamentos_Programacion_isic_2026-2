#include <stdio.h>
int main() {
    float saldo = 1000.0; // Saldo inicial
    float retiro;
    float deposito;
    int menu;
    printf("Cajero automatico");
    printf("Ingrese la opcion deseada(1: Consultar saldo, 2: Retirar dinero, 3: Depositar dinero, 4: Salir): ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Su saldo es: %.2f\n", saldo);
        break;
    case 2:
        printf("Ingrese el monto a retirar: ");
        scanf("%f", &retiro);
        if (retiro <= saldo) {
            saldo = saldo - retiro;
            printf("Retiro exitoso. Su nuevo saldo es: %.2f\n", saldo);
        } else {
            printf("Fondos insuficientes.\n");
        }
        break;
    case 3:
        printf("Ingrese el monto a depositar: ");
        scanf("%f", &deposito);
        saldo = saldo + deposito;
        printf("Deposito exitoso. Su nuevo saldo es: %.2f\n", saldo);
        break;
    case 4:
        printf("Gracias por usar nuestro cajero automatico.\n");
        break;
    default:
        break;
    }
    return 0;
}
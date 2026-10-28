#include <stdio.h>

int main() {
    int nip_ok, robada, saldo_ok, credito;

    printf("Cajero\n");
    printf("Ingrese 1 si el NIP es correcto (0 si no): ");
    scanf("%d", &nip_ok);

    printf("Ingrese 1 si la tarjeta esta reportada como robada (0 si no): ");
    scanf("%d", &robada);

    printf("Ingrese 1 si el saldo cubre la cantidad (0 si no): ");
    scanf("%d", &saldo_ok);

    printf("Ingrese 1 si cuenta con credito de respaldo (0 si no): ");
    scanf("%d", &credito);

    if (nip_ok && !robada && (saldo_ok || credito)) {
        printf("\n[APROBADA] Transaccion exitosa. Retire su efectivo.\n");
    } else {
        printf("\n[RECHAZADA] Operacion denegada por seguridad o fondos insuficientes.\n");
    }

    return 0;
}
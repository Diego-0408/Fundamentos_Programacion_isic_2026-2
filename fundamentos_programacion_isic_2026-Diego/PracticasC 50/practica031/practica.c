#include <stdio.h>
int main() {
    int edad, boleto;
    printf("Acceso al cine\n");
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Cuenta con boleto? (1: Si, 0: No): ");
    scanf("%d", &boleto);

    if (edad <= 18 && boleto == 1) {
        printf("Acceso permitido.");
    } else {
        printf("Acceso denegado.");
    }
    return 0;
}

#include <stdio.h> 
int main () {
    float montoTotal;
    int membresiaPremium, envioInternacional;

    printf("Ingrese el monto total de la compra: ");
    scanf("%f", &montoTotal);
    printf("Cuenta con membresia premium?(1 Si, 0 No): ");
    scanf("%d", &membresiaPremium);
    printf("El envio es internacional?(1 Si, 0 No): ");
    scanf("%d", &envioInternacional);
    if (montoTotal >= 1500 || (membresiaPremium && !envioInternacional)) {
        printf("Su envio es completamente gratis");
    }
    else {
        printf("Su envio aplicara costo de envio");
    }
return 0;
}
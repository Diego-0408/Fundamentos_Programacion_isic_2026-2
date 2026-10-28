#include <stdio.h>
// necesita revision
int main() 
{
    float cuenta;
    float propina;
    int personas;
    printf("Ingrese el total de la cuenta: ");
    scanf("%f", &cuenta);
    printf("Ingrese el porcentaje de propina: ");
    scanf("%f", &propina);
    printf("Ingrese el número de personas: ");
    scanf("%d", &personas);
    printf("Su operacion es %.2f\n",(cuenta + propina) / personas);

    return 0;
}
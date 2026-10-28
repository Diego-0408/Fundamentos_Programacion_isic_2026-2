#include <stdio.h> 

int main ()
{
    float saldo;
    int PENALIZACION = 50;
    printf("Ingrese el saldo de la cuenta: ");
    scanf("%f", &saldo);
    if (saldo < 1000)
    {
        saldo = saldo - PENALIZACION;
        printf("Se ha aplicado una penalización de $%d. El saldo actual es: $%.2f\n", PENALIZACION, saldo);
    }
    else
    {
        printf("El saldo actual es: $%.2f\n", saldo);
    }   
return 0;
}

#include <stdio.h>
int main (){

    float litrosTinaco = 0;
    float litrosAcumulados;

    while (litrosTinaco <= 1000)
    {
    printf("Cuanta agua a ingresado al tinaco?(en litros): ");
    scanf("%f", &litrosAcumulados);
    litrosTinaco += litrosAcumulados;
    printf("Total acumulado hasta ahora: %.2f litros\n\n", litrosTinaco);
    
    }
    printf("Se han superado los 1000 litros"); 
    
return 0;
}
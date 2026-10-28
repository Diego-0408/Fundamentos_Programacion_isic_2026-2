#include <stdio.h>

int main() {
    int numPlaca;

    printf("Ingrese el número de placa: ");
    scanf("%d", &numPlaca);

    //Operacion 
    
    numPlaca = numPlaca % 2 == 0 ? printf("Su auto no puede circula hoy.\n") : printf("Su auto puede circular hoy.\n");

    return 0;
}
#include <stdio.h>
int main() {
    int mes;
    printf("Ingrese el numero del mes del que desea saber la cantidad de dias: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("El mes tiene 31 dias\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("El mes tiene 30 dias\n");
        break;
    case 2:
        printf("El mes tiene 28 dias\n");
        break;
    
    default:
        printf("Numero de mes invalido\n");
        break;
    }
    return 0;
}
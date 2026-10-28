#include <stdio.h>
int main() {
    int dia;
    printf("Ingrese un numero del 1 al 7 indicando el dia de la semana: ");
    scanf("%d", &dia);

    if (dia == 6 || dia == 7) {
        printf("Apagar alarma.");
    } else if (dia >= 1 && dia <= 5) {
        printf("Encender alarma.");
    } else
    {
        printf("Dia invalido.");
    }
    return 0;
}

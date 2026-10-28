#include <stdio.h>
int main () {
    int temp, ventanas, interruptor;

    printf("Ingrese la temperatura actual: ");
    scanf("%d", &temp);
    printf("Ingrese el estado actual de las ventanas(1 abiertas, 0 cerradas: )");
    scanf("%d", &ventanas);
    printf("Ingresa el estado del interruptor manual(1 encendido, 0 apagado): ");
    scanf("%d", &interruptor);
    if ((temp > 30 && !ventanas) || interruptor){
        printf("El sistema del clima se ha activado");
    }
    else {
        printf("El sistema permanece apagado");
    }
return 0;
}
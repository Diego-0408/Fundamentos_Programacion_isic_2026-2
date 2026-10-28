#include <stdio.h>

int main() {
    
    int monedas;
    int nietos;
    int herencia;

    printf("Ingrese la cantidad de monedas que hay en la herencia: ");
    scanf("%d", &monedas);
    printf("Ingrese la cantidad de nietos: ");
    scanf("%d", &nietos);

    printf("Cada nieto recibira %d monedas\n", monedas / nietos);
    printf("Se donaran %d monedas\n", monedas % nietos);
    
    return 0;
}
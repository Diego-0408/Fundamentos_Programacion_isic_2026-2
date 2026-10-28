#include <stdio.h>
int main () {
    int opcionIngresada;
    int productosTotales = 0;

    do {
        printf("Menu cafetera\n\n");
        printf("Selecicione la opcion deseada\n");
        printf("1. Café Espresso\n2. Café Americano\n3. Capuchino\n4. Salir\n");
        scanf("%d", &opcionIngresada);

    } while (opcionIngresada != 4);

    printf ("Su ejecucion termino, La cantidad de productos totales fue de %d", productosTotales);

return 0;
}
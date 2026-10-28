#include <stdio.h>
int main () {
    int dosis;
    int suma; 
    printf("TABLA DOSIS\n");

    for (int i = 0; i >= 10; i+= 5) {
        printf("Ingrese la cantidad de dosis ingeridas(5 en 5)%d", i);
        scanf("%d", &dosis);

        suma += dosis;
    }

    printf("La suma total de dosis ingeridas es de: %d", suma);

return 0;
}
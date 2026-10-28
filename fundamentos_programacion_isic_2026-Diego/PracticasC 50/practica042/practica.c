#include <stdio.h>
int main () {

    int num;
    int suma = 0;

    for (int i = 1; i <= 7; i++) {
        printf("Ingresa el numero %d ", i);
        scanf("%d", &num);

        suma += num;
    }
    printf ("'\nLa suma total es: %d'\\''n", suma);

return 0;
}
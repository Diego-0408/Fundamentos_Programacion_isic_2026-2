#include <stdio.h>

int main() {
    double radio;
    double area;
    const double PI = 3.141592653589793;

    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);

    area = PI * radio * radio;

    printf("El area del circulo es: %.15lf", area);

    return 0;
}

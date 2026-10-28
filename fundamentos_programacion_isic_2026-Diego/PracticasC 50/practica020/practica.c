#include <stdio.h>

int main()
{
  float a,b,c,resultado;

  printf("Calculadora de discriminante\n");
  printf("Ingrese el valor a: ");
  scanf("%f", &a);
  printf("Ingrese el valor b: ");
  scanf("%f", &b);
  printf("Ingrese el valor c: ");
  scanf("%f", &c);

  //Operacion
  
  resultado = (b * b) - (4 * a * c);

  printf("El discriminante de esta operacion es:%.2f ",resultado);

return 0;
}

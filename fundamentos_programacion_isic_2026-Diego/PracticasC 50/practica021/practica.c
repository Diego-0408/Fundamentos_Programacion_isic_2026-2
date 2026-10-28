#include <stdio.h>

int main ()
{
  float temperatura;

  printf("Alerta de temperatura\n");
  printf("Ingrese la temperatura: ");
  scanf("%f", &temperatura);

  if (temperatura < 0)
  {
    printf("Alerta");
  }

return 0;
}

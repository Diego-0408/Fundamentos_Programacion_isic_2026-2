#include <stdio.h>

int main ()
{
  int NIP = 1234;
  int nipIngresado;

  printf("Ingrese su nip: ");
  scanf("%d", &nipIngresado);

  if (nipIngresado == NIP)
  {
    printf("Acceso concedido");
  }
  else 
  {
    printf("Acceso denegado");
  }

return 0;
}

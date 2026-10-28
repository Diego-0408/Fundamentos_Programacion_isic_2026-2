#include <stdio.h>

int main ()
{
  int zona;
  printf("Ingrese la zona del envio(1, 2, 3): ");
  scanf("%d", &zona);

  switch (zona)
  {
    case 1:
      printf("Local=$50\n");
      break;
    case 2:
      printf("Nacional=$150\n");
      break;
    case 3:
      printf("Internacional=$500\n");
      break;
    default: 
      printf("Error\n");
      break;
  }
return 0;
}

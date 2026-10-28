#include <stdio.h>
int main () {
    int NIP = 7843;
    int nipIngresado;

    do {
        printf("Ingrese su nip: ");
        scanf("%d", &nipIngresado);
    } while (nipIngresado != NIP);

    printf("Nip correcto");

return 0;   
}
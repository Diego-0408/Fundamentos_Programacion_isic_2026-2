#include <stdio.h>
int main (){
    int examenConducir, examenVista, pagoLicencia, firmaTutores;

    printf("Aprobo el examen de conducir?(1 Si, 0 No): ");
    scanf("%d", &examenConducir);
    printf("Aprobo el examen de vista?(1 Si, 0 No): ");
    scanf("%d", &examenConducir);
    printf("Cuenta con la autorizacion de su tutor?(1 Si, 0 No): ");
    scanf("%d", &firmaTutores);
    printf("Cuenta con el pago de su licencia de conducir?(1 Si, 0 No)");
    scanf("%d", &pagoLicencia);

    if (examenConducir && examenVista && firmaTutores && pagoLicencia ) {
        printf("Su licencia fue aprobada"); 
    }
    else {
        printf("Su licencia fue desaprobada");
    }






return 0;
}
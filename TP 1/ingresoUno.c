#include "ingresoUno.h"
int ingresarNumero()
{
    int notaIngresada;
    printf("ingrese un numero :",notaIngresada);
    scanf("%d", &notaIngresada);
    return notaIngresada;
}






/*


int pedirNota(void)
{
     int notaIngresada;

    do{
        printf("ingrese una nota entre 0 y 10:");
        scanf("%d", &notaIngresada);
        printf("ingrese otra nota entre 0 y 10:");
        scanf("%d", &notaIngresada);
    }while(notaIngresada<0 || notaIngresada>10);

    return notaIngresada;
}
*/

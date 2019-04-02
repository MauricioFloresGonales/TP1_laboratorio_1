#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int numeroX;
    int numeroY;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    int factoreo;
    int opcion;
    char seguir = 's';

      do{
        printf("1. Ingresar 1er operando(A=x) \n2. Ingresar 2do operando (B=y) \n3. Calcular todas las operaciones.\n4. Informar resultados.\n5. Salir\nElija una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            numeroX= ingresarNumero();
            break;
        case 2:
            numeroY= ingresarNumero();
            break;
        case 3:
            suma= calculoSuma(numeroX, numeroY);
            resta= calculoResta(numeroX, numeroY);
            division= calculoDivision(numeroX, numeroY);
            multiplicacion= calculoMultiplicacion(numeroX,numeroY);
            factoreo= factorial(numeroX);

            break;
        case 4:
            printf("la suma es :%d\n", suma);
            printf("la la resta es :%d\n", resta);
            printf("la division es :%f\n", division);
            printf("la multiplicacion es: %d\n", multiplicacion);
            printf("el resultado del factoreo es: %d\n", factoreo);
            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("no ingrewso una opcion valida!!\n");
            break;
        }
        system("pause");
        system("cls");
    }while(seguir =='s');











/*    numeroX= ingresarNumero();
    numeroY= ingresarNumero();*/

   /* suma= calculoSuma(numeroX, numeroY);
    printf("la suma es :%d", suma); */

    /*resta= calculoResta(numeroX, numeroY);
    printf("la la resta es :%d", resta); */

    /*division= calculoDivision(numeroX,numeroY);
    printf("la division es :%d", division); -----------------------esta mal falta algo para que de con coma */

    /*multiplicacion= calculoMultiplicacion(numeroX,numeroY);
    printf("la multiplicacion es: %d", multiplicacion);*/


    /*factoreo= factorial(numeroX);
    printf("el resultado del factoreo es: %d", factoreo);----------------esta mal*/


}

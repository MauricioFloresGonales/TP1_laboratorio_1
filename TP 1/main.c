#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int numeroX;
    int numeroY;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factoreoX;
    int factoreoY;
    int opcion;
    char seguir = 's';
    int X= 0;
    int Y= 0;
    int paso3 =0;

      do{
            if(X == 0)
            {
                printf("1. Ingresar 1er operando(A=X)\n");
            }else{
                printf("1. Ingresar 1er operando(A=%d)\n",numeroX);
                X= 1;
            }//if(X == 0)

            if(Y == 0)
            {
                printf("2. Ingresar 2do operando(B=Y)\n");
            }else{
                printf("2. Ingresar 2do operando(B=%d)\n",numeroY);
                Y= 1;
            }//if(Y == 0)

        printf("3. Calcular todas las operaciones.\n4. Informar resultados.\n5. Salir\nElija una opcion:");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            numeroX= ingresarNumero();
            X=1;
            break;
        case 2:
            numeroY= ingresarNumero();
            Y=1;
            break;
        case 3:
            if(X==0 && Y==0)
            {
                printf("NO INGRESASTE (A) NI (B)\n");
            }else{
                if(X==0 && Y==1)
                {
                    printf("NO INGRESASTE (A)\n");
                }else{
                    if(X==1 && Y==0)
                    {
                        printf("NO INGRESASTE (B)\n");
                    }else{

                        printf("a) Calcular la suma (A+B)\nb) Calcular la resta (A-B)\nc) Calcular la division (A/B)\nd) Calcular la multiplicacion (A*B)\ne) Calcular el factorial (A!)\n");
                        suma= calculoSuma(numeroX, numeroY);
                        resta= calculoResta(numeroX, numeroY);
                        division= calculoDivision(numeroX, numeroY);
                        multiplicacion= calculoMultiplicacion(numeroX,numeroY);
                        factoreoX= factorial(numeroX);
                        factoreoY= factorial(numeroY);
                        paso3=1;
                    }//if(X==1 && Y==0
                }//if(X==0 && Y==1)
            }//if(X==0 && Y==0)

            break;
        case 4:
            if(paso3==0)
            {
                printf("No calsulaste las operaciones (operacion 3) o te falto agregar un dato.\n");

            }else{

                printf("a)La suma es :%d\n", suma);

                printf("b)La la resta es :%d\n", resta);

                if(numeroY>=1)
                {
                    division= calculoDivision(numeroX, numeroY);
                    printf("c)La division es :%f\n", division);

                }else{

                    printf("no se puede dividir por 0\n");

                }//if(numeroY>=1)

                printf("d)La multiplicacion es: %d\n", multiplicacion);

                printf("e)El factorial de A es: %d y ", factoreoX);

                printf("el factorial de B es: %d\n", factoreoY);
            }

            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("no ingreso una opcion valida!!\n");
            break;
        }
        system("pause");
        system("cls");
    }while(seguir =='s');

}

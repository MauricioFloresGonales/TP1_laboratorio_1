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

                        printf("a) Calcular la suma (%d+%d)\n",numeroX,numeroY);
                        printf("b) Calcular la resta (%d-%d)\n",numeroX,numeroY);
                        printf("c) Calcular la division (%d/%d)\n",numeroX,numeroY);
                        printf("d) Calcular la multiplicacion (%d*%d)\n",numeroX,numeroY);
                        printf("e) Calcular el factorial (%d!) y (%d!)\n",numeroX,numeroY);

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
                printf("No calculaste las operaciones (operacion 3) o te falto agregar un dato.\n");

            }else{

//               SUMA:

                printf("a)La suma es :%d\n", suma);

//               RESTA:

                printf("b)La la resta es :%d\n", resta);

//              DIVISION:

                if(numeroY>=1)
                {
                    division= calculoDivision(numeroX, numeroY);

                    printf("c)La division es :%.2f\n", division);

                }else{

                    printf("c)No se puede dividir por 0\n");

                }//if(numeroY>=1)

//              MULTIPLICACION:

                printf("d)La multiplicacion es: %d\n", multiplicacion);

//              FACTORIZACION:

                if(numeroX==0)
                {
                    printf("e) No se puede factoriar por 0 y ");

                }else{
                    if(numeroX<0)
                    {
                        printf("e) No se puede factoriar un numero negativo y ");
                    }else{
                         printf("e)El factorial de A es: %d y ", factoreoX);
                    }//if(numeroX<0)
                }//if(numeroX==0)

                if(numeroY==0)
                {
                    printf("no se puede factoriar por 0\n");

                }else{
                    if(numeroX<0)
                    {
                        printf("no se puede factoriar un numero negativo\n");
                    }else

                    printf("el factorial de B es: %d\n", factoreoY);
                }//if(numeroY==0)
            }//if(paso3==0)

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

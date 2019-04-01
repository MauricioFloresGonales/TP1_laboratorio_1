
#include "funciones.h"

int ingresarNumero()
{
    int notaIngresada;
    printf("ingrese un numero :",notaIngresada);
    scanf("%d", &notaIngresada);
    return notaIngresada;
}

int calculoSuma(int operandoA, int operandoB)
{
    int resultado;

    resultado= operandoA + operandoB;

    return resultado;

}

int calculoResta(int operandoA, int operandoB)
{
    int resultado;

    resultado= operandoA - operandoB;

    return resultado;

}

int calculoDivision(int operandoA,int operandoB)
{
    int resultado;
    resultado= (float)operandoA/operandoB;
    scanf("la division es: %f", resultado);
    return resultado;

}

#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"


int ingresarNumero()
{
    int notaIngresada;
    printf("Ingrese un numero :",notaIngresada);
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

float calculoDivision(int operandoA,int operandoB)
{
    float resultado;

    resultado= (float) operandoA/operandoB;

    return resultado;

}

int calculoMultiplicacion(int operandoA,int operandoB)
{
    int respuesta;
    respuesta= operandoA *operandoB;
    return respuesta;

}

int factorial(int operando)
{
    int resultado;

    if(operando == 0 || operando == 1)
    {
        resultado = 1;
    }else{
        resultado= operando * factorial(operando -1);
    }

    return resultado;
}

#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"


/** \brief se ingresa un numero;
 *
 * \return int devuelve el numero ingresado;
 *
 */
int ingresarNumero()
{
    int notaIngresada;
    printf("Ingrese un numero :",notaIngresada);
    scanf("%d", &notaIngresada);
    return notaIngresada;
}

/** \brief sumar dos numeros
 *
 * \param operandoA int primer numero ingresado
 * \param operandoB int segundo numero ingresado
 * \return int la suma entre los dos numeros
 *
 */
int calculoSuma(int operandoA, int operandoB)
{
    int resultado;

    resultado= operandoA + operandoB;

    return resultado;

}

/** \brief
 *
 * \param operandoA int primer numero ingresado
 * \param operandoB int segundo numero ingresado
 * \return int la resta entre los dos numeros
 *
 */
int calculoResta(int operandoA, int operandoB)
{
    int resultado;

    resultado= operandoA - operandoB;

    return resultado;

}

/** \brief
 *
 * \param operandoA int primer numero ingresado
 * \param operandoB int segundo numero ingresado
 * \return float la division entre los dos numeros
 *
 */
float calculoDivision(int operandoA,int operandoB)
{
    float resultado;

    resultado= (float) operandoA/operandoB;

    return resultado;

}

/** \brief
 *
 * \param operandoA int int primer numero ingresado
 * \param operandoB int segundo numero ingresado
 * \return int la multiplicacion entre los dos numeros
 *
 */
int calculoMultiplicacion(int operandoA,int operandoB)
{
    int respuesta;
    respuesta= operandoA *operandoB;
    return respuesta;

}

/** \brief
 *
 * \param operando int numero ingresado
 * \return int la factorizacion del numero
 *
 */
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

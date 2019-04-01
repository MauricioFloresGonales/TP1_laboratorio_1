#include "factorial.h"

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

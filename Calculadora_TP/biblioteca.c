float operadorSuma(float operadorUno,float operadorDos)
{
    float resultadoSuma;
    resultadoSuma = operadorUno + operadorDos;
    return resultadoSuma;

}

float operadorResta(float operadorUno,float operadorDos)
{
    float resultadoResta;
    resultadoResta = operadorUno - operadorDos;
    return resultadoResta;
}

float operadorDivision(float operadorUno,float operadorDos)
{
    float resultadoDivision;
    if(operadorDos!=0)
    {
        resultadoDivision = operadorUno / operadorDos;
    }
    else
    {
        resultadoDivision = 0;
    }

    return resultadoDivision;

}


float operadorMultiplicacion(float operadorUno,float operadorDos)
{
    float resultadoMultiplicar;
    resultadoMultiplicar = operadorUno * operadorDos;
    return resultadoMultiplicar;

}

float operadorFactorial(float operadorUno, float operadorDos,float *acumuladorUno,float *acumuladorDos)

{

    float acumulador = 1;
    float acumuladorD = 1;
    float i;
    float j;

    for(i= operadorUno;i>0;i--)
    {
        acumulador = acumulador*i;
    }
    for(j= operadorDos;j>0;j--)
    {
        acumuladorD = acumuladorD*j;
    }

    *acumuladorUno = acumulador;
    *acumuladorDos = acumuladorD;

    return 0 ;


}

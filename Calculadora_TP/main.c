#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
      //Variables

    float operadorUno=0;
    float operadorDos=0;
    float sumaResultado;
    float restaResultados;
    float divisionResultados;
    float multiplicarResultados;
    float miAcumulador;
    float miAcumuladorD;

    int opcion;



    do //Menu

    {
        printf("La Calculadora \n");
        printf("1. Ingresar 1er operando (A=%.2f).\n", operadorUno);
        printf("2. Ingresar 2er operando (B=%.2f).\n", operadorDos);
        printf("3. Calcular las siguientes operaciones :\n");
        printf("   a) Calcular la suma (A+B)\n");
        printf("   b) Calcular la resta (A-B)\n");
        printf("   c) Calcular la division (A/B)\n");
        printf("   d) Calcular la multiplicacion (A*B)\n");
        printf("   e) Calcular el factorial (A!)\n");
        printf("4. Informar resultados \n");
        printf("5. Salir\n");
        printf("Elije una opcion: ");
        scanf("%d",&opcion);


        switch(opcion)//Eleccion de opciones
        {
        case 1://Obtencion del operando 1

            printf("1. Ingresar 1er operando: ");
            scanf("%f",&operadorUno);
            break;
        case 2://Obtencion del operando 2

            printf("2. Ingresar 2er operando: ");
            scanf("%f",&operadorDos);

            break;
        case 3://Obtencion de las funciones

            sumaResultado = operadorSuma(operadorUno,operadorDos);
            restaResultados = operadorResta(operadorUno,operadorDos);
            divisionResultados = operadorDivision(operadorUno,operadorDos);
            multiplicarResultados = operadorMultiplicacion(operadorUno,operadorDos);
            operadorFactorial(operadorUno,operadorDos,&miAcumulador,&miAcumuladorD);


            break;

        case 4://Resultados

            printf("    a) la suma (A+B): %.2f\n",sumaResultado);
            printf("    b) la resta (A-B): %.2f\n",restaResultados);
            if(operadorDos==0)
            {
                printf("    c) No es posible dividir por cero\n");
            }
            else
            {
                printf("    c) la division (A/B): %.2f\n",divisionResultados);
            }
            printf("    d) la multiplicacion (A*B): %.2f\n",multiplicarResultados);

            printf("    e) el factorial (A!): %.0f el factorial (B!): %.0f\n ",miAcumulador,miAcumuladorD);

            system("pause");

            break;
        case 5://Salir

            printf("Muchas Gracias por utilizar La Calculadora\n");
            system("pause");
            break;

        default://Error
            printf("Opcion Incorrecta. Reingrese la opcion\n" );
            system("pause");
            break;

        }

        system("cls");

    }while(opcion != 5);

    return 0;
}

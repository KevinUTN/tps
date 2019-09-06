#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#endif // BIBLIOTECA_H_INCLUDED

/** \brief Suma el operador uno con el operador dos
 *
 * \param operadorUno float es llamado el operador 1
 * \param operadorDos float junto con el operador 2 se calcula lo pedido.
 * \return float Regresa el resultado de la suma de los operadores
 *
 */
float operadorSuma(float operadorUno,float operadorDos);
/** \brief Resta el operador uno con el operador dos
 *
 * \param operadorUno float es llamado el operador 1
 * \param operadorDos float junto con el operador 2 se calcula lo pedido.
 * \return float Regresa el resultado de la resta de los operadores
 *
 */
float operadorResta(float operadorUno,float operadorDos);
/** \brief Divide el operador uno con el operador dos
 *
 * \param operadorUno float es llamado el operador 1
 * \param operadorDos float junto con el operador 2 se calcula lo pedido.
 * \return float Regresa el resultado de la division de los operadores
 *
 */
float operadorDivision(float operadorUno,float operadorDos);
/** \brief Multiplicar el operador uno con el operador dos
 *
 * \param operadorUno float es llamado el operador 1
 * \param operadorDos float junto con el operador 2 se calcula lo pedido.
 * \return float Regresa el resultado de la multiplicacion de los operadores
 *
 */
float operadorMultiplicacion(float operadorUno,float operadorDos);

/** \brief Se factorizan los operadores uno y dos
 *
 * \param operadorUno float es llamado el operador 1
 * \param operadorDos float junto con el operador 2 se calcula lo pedido.
 * \param float* el puntero guarda el factorial del operador uno
 * \param float* el puntero guarda el factorial del operador dos
 * \return float regresa 0
 *
 */
float operadorFactorial(float operadorUno, float operadorDos,float*,float*);


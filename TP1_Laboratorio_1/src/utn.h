/** \brief funcion que hace la sumatoria de dos numeros
 *
 * \param  operadorA recibe dato float
 * \param  operadorB recibe dato float
 * \param  *pResultado recibe de main una direccion de memoria para devolver el resultado
 * \return  devuelve (-1 error) - (0 correcto)
 *
 */
int suma(float operadorA, float operadorB,float *pResultado);



/** \brief funcion que hace la resta de dos numeros
 *
 * \param  operadorA recibe dato float
 * \param  operadorB recibe dato float
 * \param  *pResultado recibe de main una direccion de memoria para devolver el resultado
 * \return  devuelve (-1 error) - (0 correcto)
 *
 */
int resta(float operadorA, float operadorB,float *pResultado);


/** \brief funcion que hace la divicion de dos numeros
 *
 * \param  operadorA recibe dato float
 * \param  operadorB recibe dato float
 * \param  *pResultado recibe de main una direccion de memoria para devolver el resultado
 * \return  devuelve (-1 error) - (0 correcto)
 *
 */
int division(float operadorA, float operadorB,float *pResultado);


/** \brief funcion que hace la multiplicacion de dos numeros
 *
 * \param  operadorA recibe dato float
 * \param  operadorB recibe dato float
 * \param  *pResultado recibe de main una direccion de memoria para devolver el resultado
 * \return  devuelve (-1 error) - (0 correcto)
 *
 */
int multiplicacion(float operadorA, float operadorB,float *pResultado);




/** \brief funcion que hace el factorial de un numero
 *
 * \param  operadorA recibe dato float
 * \param float operador  recibe dato float
 * \param *Resultadofactorial recibe de main una direccion de memoria para devolver el resultado
 * \return  devuelve (-1 error) - (0 correcto)
 *
 */
int factorial(float operador,float *Resultadofactorial);


/** \brief funcion que devuelve un float validado
 * \param char* mensaje mensaje que pasa el usuario para ingresar el primer dato
 * \param char* mensajeError mensaje si el usuario ingreso mal el numero
 * \param loat* pResultado recibe de main una direccion de memoria para devolver el resultado
 * \param int reintentos veces que el usuario puede ingresar un numero incorrectamente
 * \param int maximo numero maximo que puede ingresar el usuario
 * \param int minimo numero minimo que puede ingresar el usuario
 * \return  devuelve (-1 error) - (0 correcto)
 *
 */

int getFloat(char* mensaje, char* mensajeError, float* pResultado,int reintentos,int maximo,int minimo);



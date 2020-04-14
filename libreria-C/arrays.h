#include <stdio.h>
#include <stdlib.h>

/*************************************************************************************************************/

/** \brief CARGA TODO EL ARRAY CON EL ELEMENTO PASADO POR PARAMETRO. DEVUELVE "1" SI CUMPLIO EL OBJETIVO
 *         "0" EN CASO CONTRARIO.
 * \param int*
 * \param int
 * \param int
 * \return int
 *
 */
int initializeArray(int*, int, int);

/*************************************************************************************************************/

/** \brief CARGA EL ARRAY PASADO POR PARAMETRO CON LOS NUMEROS INGRESADOS POR EL USUARIO.
 *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
 * \param int*
 * \param int
 * \return int
 *
 */
int loadNumbers(int*, int);

/*************************************************************************************************************/

/** \brief BUSCA UN LUGAR LIBRE EN EL ARRAY PASADO POR PARAMETRO.
 *         DEVUELVE EL "INDICE" SI CUMPLE EL OBJETIVO, "-1" EN CASO CONTRARIO.
 * \param int*
 * \param int
 * \param int
 * \return int
 *
 */
int findEmptyPlace(int*, int, int);

/*************************************************************************************************************/

/** \brief CARGA EL NUMERO PASADO POR PARAMETRO EN UN LUGAR DISPONIBLE DEL ARRAY.
 *         DEVUELVE "1" SI CUMPLIO EL OBJETIVO, "0" EN CASO CONTRARIO.
 * \param int*
 * \param int
 * \return int
 *
 */
int loadNumber(int*, int);

/*************************************************************************************************************/

/** \brief IMPRIME EN PANTALLA LOS ELEMENTOS DEL ARRAY PASADO POR PARAMETRO.
 *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
 * \param int*
 * \param int
 * \param int
 * \return int
 *
 */
 int showNumbers(int*, int, int);

 /*************************************************************************************************************/

 /** \brief IMPRIME EN PANTALLA SOLO LOS NUMEROS PARES DEL ARRAY PASADO POR PARAMETRO.
  *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
  * \param int*
  * \param int
  * \return int
  *
  */
 int showPairs(int*, int);

 /*************************************************************************************************************/

 /** \brief IMPRIME EN PANTALLA SOLO LOS NUMEROS IMPARES DEL ARRAY PASADO POR PARAMETRO.
  *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
  * \param int*
  * \param int
  * \return int
  *
  */
 int showNoPairs(int*, int);

 /*************************************************************************************************************/

 /** \brief IMPRIME EN PANTALLA SOLO LOS NUMEROS POSITIVOS DEL ARRAY PASADO POR PARAMETRO.
  *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
  * \param int*
  * \param int
  * \return int
  *
  */
 int showPositives(int*, int);

 /*************************************************************************************************************/

 /** \brief IMPRIME EN PANTALLA SOLO LOS NUMEROS NEGATIVOS DEL ARRAY PASADO POR PARAMETRO.
  *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
  * \param int*
  * \param int
  * \return int
  *
  */
 int showNegatives(int*, int);

 /*************************************************************************************************************/

 /** \brief IMPRIME EN PANTALLA SOLO LOS NUMEROS PRIMOS DEL ARRAY PASADO POR PARAMETRO.
  *         DEVUELVE "1" SI CUMPLE EL OBJETIVO, "0" EN CASO CONTRARIO.
  * \param int*
  * \param int
  * \return int
  *
  */
 int showPrimes(int*, int);


 /*************************************************************************************************************/

 /** \brief DEVUELVE LA CANTIDAD DE ELEMENTOS CARGADOS EN EL ARRAY PASADO POR PARAMETRO.
 *
 * \param int*
 * \param int
 * \return int
 *
 */
int quantityLoaded(int*, int);

/*************************************************************************************************************/

/** \brief DEVUELVE LA SUMATORIA DE LOS ELEMENTOS CARGADOS EN EL ARRAY PASADO POR PARAMETRO.
 *
 * \param int*
 * \param int
 * \return int
 *
 */
int sumElements(int*, int);

/*************************************************************************************************************/

/** \brief CALCULA Y DEVUELVE EL PROMEDIO DE LOS ELEMENTOS DEL ARRAY PASADO POR PARAMETRO.
 *
 * \param int*
 * \param int
 * \return float
 *
 */
float calculateAverage(int*, int);

/*************************************************************************************************************/

/** \brief CALCULA Y DEVUELVE EL PROMEDIO DE LOS NUMEROS POSITIVOS DEL ARRAY PASADO POR PARAMETRO.
 *         DEVUELVE "-1" SI NO EXISTEN NUMEROS POSITIVOS DENTRO DEL ARRAY.
 * \param int*
 * \param int
 * \return float
 *
 */
float calculateAveragePositives(int*, int);

/*************************************************************************************************************/

/** \brief CALCULA Y DEVUELVE EL PROMEDIO DE LOS NUMEROS NEGATIVOS DEL ARRAY PASADO POR PARAMETRO.
 *         DEVUELVE "1" SI NO EXISTEN NUMEROS NEGATIVOS DENTRO DEL ARRAY.
 * \param int*
 * \param int
 * \return float
 *
 */
float calculateAverageNegatives(int*, int);

/*************************************************************************************************************/

/** \brief CALCULA Y DEVUELVE EL MAXIMO DE LOS ELEMENTOS DEL ARRAY PASADO POR PARAMETRO.
 *
 * \param int*
 * \param int
 * \return int
 *
 */
int calculateMaximum(int*, int);

/*************************************************************************************************************/

/** \brief CALCULA Y DEVUELVE EL MINIMO DE LOS ELEMENTOS DEL ARRAY PASADO POR PARAMETRO.
 *
 * \param int*
 * \param int
 * \return int
 *
 */
int calculateMinimum(int*, int);

/*************************************************************************************************************/

void bubbleSort(int[], int);
void bubbleSort2(int[], int); ///19


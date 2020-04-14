#include <stdio.h>
#include <stdlib.h>

int isPrime(int);

/** \brief IMPRIME UN MENU ESTANDAR EN LA PANTALLA Y DEVUELVE LA OPCION INGRESADA
 *
 * \param char[]
 * \return int
 *
 */
int utn_userMenu(char[]);

/** \brief SOLICITA UN CARACTER AL USUARIO
 *
 * \param char*
 * \param char*
 * \param char*
 * \param int
 * \param int
 * \param int
 * \return int
 *
 */
int utn_getCaracter(char*, char*, char*, int, int, int);

/******************************************************/

/** \brief SOLICITA UN NUMERO ENTERO AL USUARIO
 *
 * \param int*
 * \param char*
 * \param char*
 * \param int
 * \param int
 * \param int
 * \return int
 *
 */
int utn_getNumber(int*, char*, char*, int, int, int);

/***************************************************/

/** \brief SOLICITA UN NUMERO FLOTANTE AL USUARIO
 *
 * \param float*
 * \param char*
 * \param char*
 * \param float
 * \param float
 * \param int
 * \return int
 *
 */
int utn_getFloat(float*, char*, char*, float, float, int);

/*******************************************************/

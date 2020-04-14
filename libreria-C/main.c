#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "arrays.h"
#include <string.h>
#include <ctype.h>
#include "strings.h"
#define T 10
#define ORD 1
#define INV -1
#define INICIO -1
#define TAM 51
int main()
{

    /*   int arrayNumbers[T];

       float average;
       int maximum;
       int minimum;
       float averagePositives;
       float averageNegatives;

       int option;


       initializeArray(arrayNumbers, T, INICIO);

       do
       {
           option = utn_userMenu("1.INGRESAR NUMEROS\n2.PROMEDIO\n3.MAXIMO\n4.MINIMO\5.PARES\n6.IMPARES\n7.POSITIVOS\n8.NEGATIVOS\n9.PRIMOS\n10.PROMEDIO DE POSITIVOS\n11.PROMEDIO DE NEGATIVOS\n12.MOSTRAR ORDENADOS\n13.MOSTRAR INVERTIDOS\n15.SALIR\nELIJA UNA OPCION: ");

           switch(option)
           {

           case 1:
               loadNumbers(arrayNumbers, T);
               break;

           case 2:
               average = calculateAverage(arrayNumbers,T); /// PROMEDIO
               printf("\nEL PROMEDIO ES: %f", average);
               break;

           case 3:
               maximum = calculateMaximum(arrayNumbers,T); /// MAXIMO
               printf ("\nEL MAXIMO ES: %d\n", maximum);
               break;

           case 4:
               minimum = calculateMinimum(arrayNumbers,T); /// MINIMO
               printf ("\nEL MINIMO ES: %d\n", minimum);
               break;

           case 5:
               showPairs(arrayNumbers, T); /// PARES
               break;

           case 6:
               showNoPairs(arrayNumbers, T); /// IMPARES
               break;

           case 7:
               showPositives(arrayNumbers, T); /// POSITIVOS
               break;

           case 8:
               showNegatives(arrayNumbers, T); /// NEGATIVOS
               break;

           case 9:
               showPrimes(arrayNumbers, T); /// PRIMOS
               break;

           case 10:
               averagePositives = calculateAveragePositives(arrayNumbers,T); /// PROMEDIO POSITIVOS
               printf("\nEL PROMEDIO DE LOS NUMEROS POSITIVOS ES: %f", averagePositives);
               break;

           case 11:
               averageNegatives = calculateAverageNegatives(arrayNumbers,T); /// PROMEDIO NEGATIVOS
               printf("\nEL PROMEDIO DE LOS NUMEROS NEGATIVOS ES: %f", averageNegatives);
               break;

           case 12:
               showNumbers(arrayNumbers, T, ORD); /// MOSTRAR ORDENADOS
               break;

           case 13:
               showNumbers(arrayNumbers, T, INV); /// MOSTRAR INVERTIDOS
               break;



           }


       }
       while(option!=15); */

    char nombre[TAM] ;
    char segundoNombre[TAM] ;
    char apellido[TAM];
    char nombreCompleto[TAM];

    getString(nombre, "\nINGRESE SU PRIMER NOMBRE: ", TAM);
    getString(segundoNombre, "\nINGRESE SU SEGUNDO NOMBRE: ", TAM);
    getString(apellido, "\nINGRESE SU APELLIDO: ", TAM);

    strlwr(nombre);
    strlwr(segundoNombre);
    strlwr(apellido);

    nombre[0] = toupper(nombre[0]);
    segundoNombre[0] = toupper(segundoNombre[0]);
    apellido[0] = toupper(apellido[0]);

    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, segundoNombre);

    printf("\nSU NOMBRE COMPLETO ES: %s", nombreCompleto);

    return 0;
}



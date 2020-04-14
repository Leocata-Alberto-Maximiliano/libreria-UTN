#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#include "funciones.h"

/************************************************************************************************/

int initializeArray(int* array, int lenght, int value)
{
    int success = 0;
    int i;

    if(array != NULL)
    {
        for(i=0; i<lenght; i++)
        {
            array[i] = value;
            success = 1;
        }
    }

    return success;
}

/************************************************************************************************/

int loadNumbers(int* array, int lenght)
{
    int success = 0;
    int i;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            printf ("\nINGRESE UN NUMERO: ");
            scanf ("%d", &array[i]);
        }
        success =1;
    }

    return success;

}

/************************************************************************************************/

int findEmptyPlace(int* array, int lenght, int value)
{
    int i;
    int index = -1;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {

            if(array[i]== value)
            {
                index = i;
                break;
            }

        }
    }


    return index;
}

/************************************************************************************************/

int loadNumber(int* array, int lenght)
{
    int success = 0;
    int i;
    int foundIndex;


    if(array != NULL)
    {
        foundIndex = findEmptyPlace(array,lenght,-1);

        if(foundIndex!=-1) /// SI ENCONTRO UN LUGAR LIBRE
        {

            printf ("INGRESE UN NUMERO: ");
            scanf ("%d", &array[foundIndex]);
            success = 1;
        }
        else
        {
            printf("\nESPACIO AGOTADO");
        }
    }

    return success;
}

/************************************************************************************************/

int showNumbers(int* array, int lenght, int order)
{
    int i;
    int success = 0;

    if(array != NULL)
    {
        switch(order)
        {
        case 1:

            for (i = 0; i < lenght; i++)
            {

                printf ("%d\n", array[i]);
            }

            success = 1;

            break;

        case -1:

            for (i = lenght -1; i >=0; i--)
            {

                printf ("%d\n", array[i]);
            }

            success = 1;

            break;


        }
    }

    return success;

}

/************************************************************************************************/

int showPairs(int* array, int lenght)
{
    int i;
    int success = 0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i]%2 == 0)
            {
                printf ("%d\n", array[i]);
            }

        }

        success = 1;

    }

    return success;

}

/************************************************************************************************/

int showNoPairs(int* array, int lenght)
{
    int i;
    int success = 0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i]%2 != 0)
            {
                printf ("%d\n", array[i]);
            }

        }

        success = 1;

    }

    return success;
}

/************************************************************************************************/

int showPositives(int* array, int lenght)
{
    int i;
    int success = 0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i] > 0)
            {
                printf ("%d\n", array[i]);
            }

        }

        success = 1;

    }

    return success;
}

/************************************************************************************************/

int showNegatives(int* array, int lenght)
{
    int i;
    int success = 0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i] < 0)
            {
                printf ("%d\n", array[i]);
            }

        }

        success = 1;

    }

    return success;
}

/************************************************************************************************/

int showPrimes(int* array, int lenght)
{
    int i;
    int success = 0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(isPrime(array[i]) == 1)
            {
                printf ("%d\n", array[i]);
            }

        }

        success = 1;

    }

    return success;
}

/************************************************************************************************/

int quantityLoaded(int* array, int lenght)
{
    int i;
    int quantity =0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i]!=-1)
            {
                quantity++;
            }
        }
    }


    return quantity;
}

/************************************************************************************************/

int sumElements(int* array, int lenght)
{
    int i;
    int sum =0;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i]!=-1)
            {
                sum += array[i];
            }
        }
    }

    return sum;
}

/************************************************************************************************/

float calculateAverage(int* array, int lenght)
{
    int i;
    int accumulator = 0;
    float avg;


    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            accumulator += array[i];
        }

        avg = (float)accumulator/lenght;
    }


    return avg;

}

/************************************************************************************************/

float calculateAveragePositives(int* array, int lenght)
{
    int i;
    int accumulator = 0;
    int positives = 0;
    float avg = -1;


    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i] > 0)
            {
                accumulator += array[i];
                positives++;
            }

        }

        if(positives > 0)
        {
            avg = (float)accumulator/positives;
        }

    }


    return avg;
}

/************************************************************************************************/

float calculateAverageNegatives(int* array, int lenght)
{
    int i;
    int accumulator = 0;
    int negatives = 0;
    float avg = 1;


    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if(array[i] > 0)
            {
                accumulator += array[i];
                negatives++;
            }

        }

        if(negatives > 0)
        {
            avg = (float)accumulator/negatives;
        }

    }


    return avg;
}

/************************************************************************************************/

int calculateMaximum(int* array, int lenght)
{
    int i;
    int maximum;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if (array[i] > maximum || i == 0)
            {
                maximum = array[i];
            }
        }
    }

    return maximum;

}

/************************************************************************************************/

int calculateMinimum(int* array, int lenght)
{
    int i;
    int minimum;

    if(array != NULL)
    {
        for (i = 0; i < lenght; i++)
        {
            if (array[i] < minimum || i == 0)
            {
                minimum = array[i];
            }
        }
    }

    return minimum;

}

/************************************************************************************************/



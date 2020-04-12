#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*************************************************************************************************/

int utn_getCaracter(char* pResult, char* message, char* errorMessage, int min, int max, int retries)
{
    int ret = -1;
    char bufferChar;

    if(pResult != NULL && message != NULL && errorMessage != NULL && min <= max && retries >= 0)
    {
        do
        {
            printf("%s", message);
            fflush(stdin);
            scanf("%c", &bufferChar);

            if(bufferChar >= min && bufferChar <= max)
            {
                *pResult = bufferChar;
                ret = 0;
                break;
            }

            else
            {
                printf("%s", errorMessage);
                retries--;
            }

        }
        while(retries >=0);

    }

    return ret;

}

/***********************************************************************************************/

int utn_getNumber(int* pResult, char* message, char* errorMessage, int min, int max, int retries)
{
    int ret = -1;
    int bufferInt;

    if(pResult != NULL && message != NULL && errorMessage != NULL && min <= max && retries >= 0)
    {
        do
        {
            printf("%s", message);
            scanf("%d", &bufferInt);

            if(bufferInt >= min && bufferInt <= max)
            {
                *pResult = bufferInt;
                ret = 0;
                break;
            }

            else
            {
                printf("%s", errorMessage);
                retries--;
            }

        }
        while(retries >=0);

    }

    return ret;

}

/***********************************************************************************************/

int utn_getFloat(float* pResult, char* message, char* errorMessage, float min, float max, int retries)
{
    int ret = -1;
    float bufferFloat;

    if(pResult != NULL && message != NULL && errorMessage != NULL && min <= max && retries >= 0)
    {
        do
        {
            printf("%s", message);
            scanf("%f", &bufferFloat);

            if(bufferFloat >= min && bufferFloat <= max)
            {
                *pResult = bufferFloat;
                ret = 0;
                break;
            }

            else
            {
                printf("%s", errorMessage);
                retries--;
            }

        }
        while(retries >=0);

    }

    return ret;

}

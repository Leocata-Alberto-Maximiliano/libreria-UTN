#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int utn_getNumber(int* pResult, char* message, char* errorMessage, int min, int max, int retries)
{
    int ret = -1;
    int bufferInt;

    if(pResult != NULL && message != NULL && errorMessage != NULL && min <= max && retries >= 0)
    {
        do
        {
            printf("%s", message);
            scanf("%d", & bufferInt);

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

        }while(retries >=0);

    return ret;

}







}

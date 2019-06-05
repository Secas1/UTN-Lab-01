#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fEmployee.h"

int initEmployee(sEmployee sListEmployee[],int len)
{
    int error=-1;

    for(int i=0;i<len;i++)
    {
        sListEmployee[i].isEmpty=1;
        error=0;
    }

    return error;
}

int addEmployee(sEmployee sListEmployee[],int len,int idEmployee,char name[],char lastName[],float salary,int idSector)
{
    int error=-1;

    for(int i=0;i<len;i++)
    {
        if(sListEmployee[i].isEmpty==1)
        {
            sListEmployee[i].idEmployee=idEmployee;
            strcpy(sListEmployee[i].name,name);
            strcpy(sListEmployee[i].lastName,lastName);
            sListEmployee[i].salary=salary;
            sListEmployee[i].idSector=idSector;

            error=0;

            break;
        }
    }

    return error;
}


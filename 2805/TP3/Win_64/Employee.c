#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"

Employee* employee_new()
{
    Employee* pEmployee;

    pEmployee=(Employee*) malloc(sizeof(Employee));

    if(pEmployee!=NULL)
    {
        return pEmployee;
    }
    printf("\n# Error al crear puntero.\n");
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* pEmployee;

    pEmployee=(Employee*) malloc(sizeof(Employee));

    int auxId=atoi(idStr);
    int auxHorasTrabajadas=atoi(horasTrabajadasStr);
    int auxSueldo=atoi(sueldoStr);

    if(pEmployee!=NULL)
    {
        employee_setId(pEmployee,auxId);
        employee_setNombre(pEmployee,nombreStr);
        employee_setHorasTrabajadas(pEmployee,auxHorasTrabajadas);
        employee_setSueldo(pEmployee,auxSueldo);

        return pEmployee;
    }
}

int employee_setId(Employee* this,int id)
{
    if(this!=NULL)
    {
        this->id=id;
        return 0;
    }
    return 1;
}

int employee_setNombre(Employee* this,char* nombre)
{
    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        return 0;
    }
    return 1;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    if(this!=NULL)
    {
        this->horasTrabajadas=horasTrabajadas;
        return 0;
    }

    return 1;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        return 0;
    }

    return 1;
}



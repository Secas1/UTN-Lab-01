#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    pFile=fopen("data.csv","r");
    int r;
    char* auxId,auxNombre,auxHorasTrabajadas,auxSueldo;

    if(pFile!=NULL)
    {
        r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,]",auxId,auxNombre,auxHorasTrabajadas,auxSueldo);
        printf("\n%d\n",r);
        if(r==4)
        {
            printf("\n\%s--%s--%s--%s\n",auxId,auxNombre,auxHorasTrabajadas,auxSueldo);
        }

        do
        {
            r=fscanf(pFile,"%[^,],%[^,],%[^,],%[^,]",auxId,auxNombre,auxHorasTrabajadas,auxSueldo);
            printf("\n%d\n",r);
            if(r==4)
            {
                printf("\n\%s--%s--%s--%s\n",auxId,auxNombre,auxHorasTrabajadas,auxSueldo);
            }
        }while(!feof(pFile));
    }
    return 1;

    fclose(pFile);
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}

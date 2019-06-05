#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/

int printMenu(char[]);

int main()
{
    int out=0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    Employee* pEmployee;
    int len;

    FILE* pFile;

    if(pFile==NULL)
    {
        printf("\n### Error al cargar puntero de archivo");
        exit(EXIT_FAILURE);
    }

    do{
        switch(printMenu("\n1.Cargar los datos de los empleados desde el archivo data.csv (modo texto)\n2.Cargar los datos de los empleados desde el archivo data.csv (modo binario)\n3.Alta de Empleado\n4.Modificar datos del empleado\n5.Baja de Empleado\n6.Lista de empleados\n7.Ordenar empleados\n8.Guardar los datos de los empleados en el archivo data.csv (modo texto)\n9.Guardar los datos de los empleados en el archivo data.csv (modo binario)\n10.Salir\n"))
        {
            case 1:
            parser_EmployeeFromText(pFile,listaEmpleados);
            break;
            case 10:
            out=1;
            break;
        }
    system("pause");
    system("cls");
    }while(out==0);
    return 0;
}

int printMenu(char options[])
{
    int x=-1;

    printf("%s",options);
    fflush(stdin);
    scanf("%d",&x);

    return x;
}

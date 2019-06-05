#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "load.h"

typedef struct
{
    int id;
    char name[51];
    float salary;
}eEmployee;

int writeFile();
eEmployee* newArrayEmployee();

int main()
{

    eEmployee* arrayEmpleoyee=newArrayEmployee();

}

int writeFile()
{
    FILE* pFile;
    int id;
    char name[51];
    float salary;

    pFile=fopen("Empleado.csv","a");

    if(pFile!=NULL)
    {
        id=intLoad("id:");
        stringLoad("name: ",name,51);
        salary=floatLoad("salary: ");
    }

    fprintf(pFile,"%d,%s,%.2f\n",id,name,salary);

    fclose(pFile);
}

eEmployee* newArrayEmployee()
{
    eEmployee* eEmployees;

    eEmployees=(eEmployee*)calloc(sizeof(eEmployee));

    if(eEmployees!=NULL)
    {
        return eEmployees;
    }
    else
    {
        printf("\n### NULL POINTERint*);
    }
}

int* newArrayPointers(int len)
{
    int* array;

    array=(int*)calloc(sizeof(int)*len);

    if(array!=NULL)
    {
        return array;
    }
    else
    {
        printf("\n### NULL POINTERint*);
    }
}

int readFile(eEmployee* arrayEmployee,int lenEmployee,int* arrayInt,int lenInt)
{
    FILE* pFile;

    pFile=fopen("Empleado.csv","r");


    if(pFile!=NULL)
    {
        fscanf(pFile,"%[^,],%[^,],%[^,]",(*(arrayEmployee+1)->id));
    }
}

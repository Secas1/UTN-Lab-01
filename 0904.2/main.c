#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "fCarga.h"

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    float sueldoBruto;
    float sueldoNeto;
    char sexo;
}sEmpleado;

int main()
{
    sEmpleado sEmpleados[5];
    int t=0;

    sEmpleados[t].legajo=pedirInt("legajo: ");
    pedirCadena("nombre: ",sEmpleados[t].nombre,20);
    sEmpleados[t].sexo=pedirChar("sexo: ");
    sEmpleados[t].sueldo=pedirFloat("sueldo: ");

    printf("\n%d\t%s\t%c\t%.2f",sEmpleados[t].legajo,sEmpleados[t].nombre,sEmpleados[t].sexo,sEmpleados[t].sueldo);
}

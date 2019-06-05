#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include <ctype.h>

void pedirCadena(char mensaje[],char cadena[],int tam)
{
    fflush(stdin);
    printf("\nIngresar %s",mensaje);
    gets(cadena);
    validarCadena(mensaje,cadena,tam);
}

void validarCadena(char mensajeError[],char cadena[],int tam)
{
    while(strlen(cadena)>=tam)
    {
        printf("\nReingresar %s",mensajeError);
        fflush(stdin);
        gets(cadena);
    }
}

void arreglarCadena(char destino[])
{
    int i=0;

    strlwr(destino);

    destino[0]=toupper(destino[0]);

    while(destino[i]!='\0')
    {
        if(isspace(destino[i]))
        {
            destino[i+1]=toupper(destino[i+1]);
        }
        i++;
    }
}

char pedirChar(char mensaje[])
{
    char c;
    fflush(stdin);
    printf("\nIngresar %s",mensaje);
    scanf("%c",&c);

    return c;
}

int pedirInt(char mensaje[])
{
    int i;
    fflush(stdin);
    printf("\nIngresar %s",mensaje);
    scanf("%d",&i);

    return i;
}

float pedirFloat(char mensaje[])
{
    float f;
    fflush(stdin);
    printf("\nIngresar %s",mensaje);
    scanf("%f",&f);

    return f;
}

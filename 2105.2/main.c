#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "load.h"

typedef struct
{
    int entero;
    char nombre[15];
}eNumero;

int main()
{
    eNumero* eArrayNumero;
    int out=0;
    int longitud=2;
    int auxEntero;
    char auxNombre[15];

    eArrayNumero=(eNumero*) calloc(sizeof(eNumero)*longitud);

    auxEntero=intLoad("entero: ");
    stringLoad("nombre: ",auxNombre,15);

    do
    {
        switch(printMenu("\n1.Ingresar numero\n2.Listar numeros\nOpcion: "))
        {
            for(int i=0;i<longitud;i++)
            {
                (eArrayNumero+i)->entero=auxEntero;
                strcpy((eArrayNumero+i)->nombre,auxNombre);
            }

    }while(out==0)
}

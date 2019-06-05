#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* pArchivo;
    char nombre[31];
    int len;

    // a , w , r
    pArchivo=fopen("archivo.csv","r");

    if(pArchivo==NULL)
    {
        printf("### Error al abrir archivo\n");
    }

    /*printf("Nombre: ");
    fflush(stdin);
    scanf("%s",&nombre);

    -----Guardado directo
    len=strlen(nombre);
    fwrite(nombre,len,1,pArchivo);

    fprintf(pArchivo,nombre);

    ----Lectura directa
    fread(nombre,len,1,pArchivo);*/

    fgets(nombre,31,pArchivo);
    printf("\nSu nombre es: %s",nombre);
    fclose(pArchivo);
}

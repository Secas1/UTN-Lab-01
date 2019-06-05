#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT 3

typedef struct
{
    int isEmpty;
    char name[51];
    char lastName[51];
    int sector;
    float salary;
}eEmployee;

int printMenu(char options[]);
int intLoad(char message[]);
float floatLoad(char message[]);
char charLoad(char message[]);
void stringLoad(char message[],char string[],int len);
void stringValidation(char errorMessage[],char string[],int len);
void stringFix(char location[]);

int main()
{
    eEmployee* eEmployees;

    int out=0;

    eEmployees=(eEmployee*)malloc(sizeof(eEmployee)*CANT);

    if(eEmployees==NULL)
    {
        printf("###Error al crear puntero");
    }

    initEmployees(eEmployees,CANT);

    char name[51];
    char lastname[51];

    do
    {
        switch(printMenu("\n1.Alta\n2.Modificacion\n3.Baja\n4.Listar\nOpcion: "))
        {
            case 1:
            for(int i=0;i<CANT;i++)
            {
                stringLoad("nombre: ",name,51);
                strcpy((eEmployees+i)->name,name);
                stringLoad("apellido: ",lastname,51);
                strcpy((eEmployees+i)->lastName,lastname);
            }
            break;
            case 4:
            for(int i=0;i<CANT;i++)
            {
                printf("\n%s %s\n",(eEmployees+i)->name,(eEmployees+i)->lastName);
            }
            break;
        }
        system("pause");
        system("cls");

    }while(out==0);
}

int printMenu(char options[])
{
    int x=-1;

    printf("%s",options);
    fflush(stdin);
    scanf("%d",&x);

    return x;
}

int intLoad(char message[])
{
    int i;

    printf("Ingresar %s",message);
    scanf("%d",&i);

    return i;
}

float floatLoad(char message[])
{
    float f;

    printf("Ingresar %s",message);
    scanf("%f",&f);

    return f;
}

char charLoad(char message[])
{
    char c;

    printf("Ingresar %s",message);
    scanf("%c",&c);

    return c;
}

void stringLoad(char message[],char string[],int len)
{
    fflush(stdin);
    printf("\nIngresar %s",message);
    gets(string);
    stringValidation(message,string,len);
}

void stringValidation(char errorMessage[],char string[],int len)
{
    while(strlen(string)>=len)
    {
        printf("\nReingresar %s",errorMessage);
        fflush(stdin);
        gets(string);
    }
}

void stringFix(char location[])
{
    int i=0;

    strlwr(location);

    location[0]=toupper(location[0]);

    while(location[i]!='\0')
    {
        if(isspace(location[i]))
        {
            location[i+1]=toupper(location[i+1]);
        }
        i++;
    }
}

int initEmployees(eEmployee* listEmployees,int len)
{
    int error=-1;

    if(listEmployees!=NULL)
    {
        for(int i=0;i<len;i++)
        {
            (listEmployees+i)->isEmpty=1;
        }
        error=0;
    }

    return error;
}

int addEmployee(eEmployee* listEmployee,int len,char* name,char* lastname,int sector,int salary)
{
    for(int i=0;i<len;i++)
    {
        if((eEmployee+i)->)
    }
}

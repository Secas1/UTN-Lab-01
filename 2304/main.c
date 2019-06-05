#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fSector.h"
#include "fEmployee.h"
#define LS 5
#define LE 3

int printMenu(char options[]);

int main()
{
    sSector sArraySector[LS];
    sEmployee sArrayEmployee[LE];
    int exit=0;

    if(initSector(sArraySector,LS)!=0)
    {
        printf("\n## ERROR INITIATING SECTORS ##");
    }

    if(initEmployee(sArrayEmployee,LE)!=0)
    {
        printf("\n## ERROR INITIATING EMPLOYEES ##");
    }
    do
    {
        switch(printMenu("1.Add Sector\n2.Delete Sector\n3.Modify Sector\n4.Print all Sectors\n5.Add Employee\n6.Delete Employee\n7.Modify Employee\n8.Exit\nOption: "))
        {
            case 1:
            addingSector(sArraySector,LS);
            break;

            case 4:
            printAllSectors(sArraySector,LS);
            break;
            case 7:
            exit=1;
            break;
        }

        system("pause");
        system("cls");
    }while(exit!=1);
}

int printMenu(char options[])
{
    int x=-1;

    printf("%s",options);
    fflush(stdin);
    scanf("%d",&x);

    return x;
}


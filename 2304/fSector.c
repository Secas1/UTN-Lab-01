#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fSector.h"

int initSector(sSector sListSector[],int len)
{
    int error=-1;

    for(int i=0;i<len;i++)
    {
        sListSector[i].isEmpty=1;
        error=0;
    }

    return error;
}

int addSector(sSector sListSector[],int len,int idSector,char description[],float hour)
{
    int error=-1;

    for(int i=0;i<len;i++)
    {
        if(sListSector[i].isEmpty==1)
        {
            sListSector[i].idSector=idSector;
            strcpy(sListSector[i].description,description);
            sListSector[i].hour=hour;
            sListSector[i].isEmpty=0;
            error=0;
            break;
        }
    }

    return error;
}

int deleteSectorById(sSector sListSector[],int len,int idSector)
{
    int error=-1;
    int flag=0;
    char d;

    for(int i=0;i<len;i++)
    {
        if(sListSector[i].idSector==idSector)
        {
            printSector(sListSector[i]);

            printf("Delete? y/n");
            scanf("%c",&d);

            if(d=='y')
            {
                sListSector[i].isEmpty=1;
                error=0;
                break;
            }
            else
            {
                printf("Not deleted");
                error=0;
                break;
            }
            flag=1;
        }
    }

    if(flag==0)
    {
        error=1;
    }

    return error;
}

int modifySectorById(sSector sListSector[],int len,int idSector)
{
    int error=-1;
    char auxDescripton[100];
    float auxHour;
    int flag=0;

    for(int i=0;i<len;i++)
    {
        if(sListSector[i].idSector==idSector)
        {
            printSector(sListSector[i]);
            switch(printMenu("1.Description\n2.Hour"))
            {
                case 1:
                printf("New description: ");
                fflush(stdin);
                gets(auxDescripton);
                break;
                case 2:
                printf("New salary per Hour: ");
                fflush(stdin);
                scanf("%f",&auxHour);
                break;
                default:
                printf("## Invalid Option ##");
                break;
            }
            flag=1;
        }
    }

    if(flag==0)
    {
        error=0;
    }
    else
    {
        error=1;
    }

    return error;
}

int printSector(sSector sListSector)
{
    printf("\n%d\t%s\t%.2f\t%d",sListSector.idSector,sListSector.description,sListSector.hour,sListSector.isEmpty);
}

int printAllSectors(sSector sListSector[],int len)
{
    for(int i=0;i<len;i++)
    {
        if(sListSector[i].isEmpty==0)
        {
            printf("\n%d\t%s\t%.2f\t%d",sListSector[i].idSector,sListSector[i].description,sListSector[i].hour,sListSector[i].isEmpty);
        }
    }
}

int addingSector(sSector sListSector[],int len)
{
    int auxId;
    char auxDescription[100];
    float auxHour;
    int error=-1;
    int intError;

    printf("Id Sector: ");
    fflush(stdin);
    scanf("%d",&auxId);

    /*for(int i=0;i<len;i++)
    {
        do
        {
            if(sListSector[i].idSector==auxId&&sListSector[i].isEmpty==1)
            {
                intError=1;
                printf("Id not available. Please re-enter: ");
                fflush(stdin);
                scanf("%d",&auxId);
            }
            else
            {
                intError==0;
            }
        }while(intError!=0);
    }*/

    printf("Description: ");
    fflush(stdin);
    gets(auxDescription);

    printf("Salary per hour: ");
    fflush(stdin);
    scanf("%f",&auxHour);

    addSector(sListSector,len,auxId,auxDescription,auxHour);
}


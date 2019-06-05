struct
{
    int idSector;
    char description[100];
    float hour;
    int isEmpty;
}typedef sSector;

int initSector(sSector sListSector[],int len);
int addSector(sSector sListSector[],int len,int idSector,char description[],float hour);;
int deleteSectorById(sSector sListSector[],int len,int idSector);
int modifySectorById(sSector sListSector[],int len,int idSector);
int addingSector(sSector sListSector[],int len);
int printSector(sSector sListSector);
int printAllSectors(sSector sListSector[],int len);


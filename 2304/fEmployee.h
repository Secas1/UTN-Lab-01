struct
{
    int idEmployee;
    char name[30];
    char lastName[30];
    float salary;
    int idSector;
    int isEmpty;
}typedef sEmployee;

int initEmployee(sEmployee sListEmployee[],int len);
int addEmployee(sEmployee sListEmployee[],int len,int idEmployee,char name[],char lastName[],float salary,int idSector);

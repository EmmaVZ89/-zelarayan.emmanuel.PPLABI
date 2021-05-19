#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "tipo.h"

int mostrarTipos(eTipo tipos[], int tam)
{
    int todoOk = 0;
    if(tipos!=NULL && tam>0)
    {
        printf("\n** Listado de tipos **\n\n");
        printf("-------------------------\n");
        printf("Id        Descripcion    \n");
        printf("-------------------------\n");
        for(int i = 0; i < tam; i++)
        {
                mostrarTipo(tipos[i]);
                todoOk = 1;
        }
        printf("--------------------------\n\n");
    }
    return todoOk;
}

void mostrarTipo(eTipo tipo)
{
    printf("%5d          %-10s\n",tipo.id,tipo.descripcion);
}

int cargarDescripcionTipo(int idTipo, eTipo tipos[], int tam, char desc[])
{
    int todoOk = 0;

    if(idTipo >= 1000 && idTipo <= 1003 && tipos != NULL && tam > 0 && desc != NULL)
    {
        for(int i = 0; i < tam; i++)
        {
            if(tipos[i].id == idTipo)
            {
                strcpy(desc, tipos[i].descripcion);
                todoOk = 1;
                break;
            }
        }
    }
    return todoOk;
}

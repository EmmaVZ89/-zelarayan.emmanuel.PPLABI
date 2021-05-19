#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "color.h"


int mostrarColores(eColor colores[], int tam)
{
    int todoOk = 0;
    if(colores!=NULL && tam>0)
    {
        printf("\n** Listado de Colores **\n\n");
        printf("-------------------------\n");
        printf("Id         Color    \n");
        printf("-------------------------\n");
        for(int i = 0; i < tam; i++)
        {
                mostrarColor(colores[i]);
                todoOk = 1;
        }
        printf("--------------------------\n\n");
    }
    return todoOk;
}

void mostrarColor(eColor color)
{
    printf("%5d          %-10s\n",color.id,color.nombreColor);
}

int cargarNombreColor(int idColor, eColor colores[], int tam, char nombreColor[])
{
    int todoOk = 0;

    if(idColor >= 5000 && idColor <= 5004 && colores != NULL && tam > 0 && nombreColor != NULL)
    {
        for(int i = 0; i < tam; i++)
        {
            if(colores[i].id == idColor)
            {
                strcpy(nombreColor, colores[i].nombreColor);
                todoOk = 1;
                break;
            }
        }
    }
    return todoOk;
}

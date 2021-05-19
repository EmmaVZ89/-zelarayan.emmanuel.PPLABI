#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "servicio.h"

int mostrarServicios(eServicio servicios[], int tam)
{
    int todoOk = 0;
    if(servicios!=NULL && tam>0)
    {
        printf("\n** Listado de Servicios **\n\n");
        printf("------------------------------------\n");
        printf("Id         Descripcion       Precio    \n");
        printf("------------------------------------\n");
        for(int i = 0; i < tam; i++)
        {
                mostrarServicio(servicios[i]);
                todoOk = 1;
        }
        printf("-------------------------------------\n\n");
    }
    return todoOk;
}

void mostrarServicio(eServicio servicio)
{
    printf("%5d          %-10s       %.2f\n",servicio.id,servicio.descripcion,servicio.precio);
}

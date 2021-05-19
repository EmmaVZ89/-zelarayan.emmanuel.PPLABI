#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "trabajo.h"
#include "bicicleta.h"
#include "servicio.h"

int altaTrabajo(eTrabajo trabajos[], int tam, int* idTrabajo,eBicicleta bicicletas[], int tamB,
                eTipo tipos[], int tamT, eColor colores[], int tamC,eServicio servicios[], int tamS)
{
    int todoOk = 0;
    int indice;

    if(trabajos!=NULL && tam > 0 && idTrabajo!=NULL && bicicletas!=NULL && tamB>0 && tipos!=NULL && tamT>0 &&
       colores!=NULL && tamC>0 && servicios!= NULL && tamS>0)
    {
        system("cls");
        printf("***  Alta Trabajos  ***\n\n");
        indice = buscarLibreTrabajo(trabajos,tam);
        if(indice != -1)
        {
            mostrarBicicletas(bicicletas,tamB,tipos,tamT,colores,tamC);
            utn_getNumero(&trabajos[indice].idBicicleta,"Ingrese Id bicicleta: ","Ingreso Invalido!\n\n",50000,51000,2);
            mostrarServicios(servicios,tamS);
            utn_getNumero(&trabajos[indice].idServicio,"Ingrese Id Servicio: ","Ingreso Invalido!\n\n",20000,20003,2);
            printf("Ingese fecha dd/mm/aaaa: ");
            scanf("%d/%d/%d", &trabajos[indice].fecha.dia,
                  &trabajos[indice].fecha.mes,
                  &trabajos[indice].fecha.anio);
            trabajos[indice].id = *idTrabajo;
            *idTrabajo = *idTrabajo+1;
            trabajos[indice].isEmpty = 0;
            todoOk = 1;
        }
        else
        {
            printf("No hay lugar en el sistema!!\n\n");
        }
    }
    return todoOk;
}

int inicializarTrabajos(eTrabajo trabajos[], int tam)
{
    int todoOk = 0;
    if(trabajos!=NULL && tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            trabajos[i].isEmpty = 1;
            todoOk = 1;
        }
    }
    return todoOk;
}

int buscarLibreTrabajo(eTrabajo trabajos[], int tam)
{
    int indice = -1;
    if(trabajos!=NULL && tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            if(trabajos[i].isEmpty)
            {
                indice = i;
                break;
            }
        }
    }
    return indice;
}

int mostrarTrabajos(eTrabajo trabajos[], int tam)
{
    int todoOk = 0;
    int flag = 1;
    if(trabajos!=NULL && tam>0)
    {
        printf("\n******* Listado de Trabajos ********\n\n");
        printf("---------------------------------------\n");
        printf("Id    Bicicleta      Servicio     Fecha\n");
        printf("---------------------------------------\n");
        for(int i = 0; i < tam; i++)
        {
            if(trabajos[i].isEmpty==0)
            {
                mostrarTrabajo(trabajos[i]);
                flag = 0;
                todoOk = 1;
            }
        }
        if(flag)
        {
            printf("   No hay trabajos que mostrar\n");
        }
        printf("---------------------------------------\n\n");
    }
    return todoOk;
}

void mostrarTrabajo(eTrabajo trabajo)
{
    printf("%5d          %5d     %5d      %2d/%2d/%4d\n",
           trabajo.id,trabajo.idBicicleta,trabajo.idServicio,trabajo.fecha.dia,trabajo.fecha.mes,trabajo.fecha.anio);
}

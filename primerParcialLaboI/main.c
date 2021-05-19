#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "fecha.h"
#include "tipo.h"
#include "color.h"
#include "bicicleta.h"
#include "servicio.h"
#include "trabajo.h"

#define CANT_TIPOS 4
#define CANT_COLORES 5
#define CANT_BICICLETAS 10
#define CANT_SERVICIOS 4
#define CANT_TRABAJOS 20


int main()
{
    int salir = 'n';
    int nextIdBicicleta = 50000;
    int nextIdTrabajo = 60000;
    eTipo tipos[CANT_TIPOS] =
    {
        {1000,"Rutera"},
        {1001,"Carrera"},
        {1002,"Mountain"},
        {1003,"BMX"},
    };
    eColor colores[CANT_COLORES] =
    {
        {5000,"Gris"},
        {5001,"Negro"},
        {5002,"Blanco"},
        {5003,"Azul"},
        {5004,"Rojo"},
    };
    eServicio servicios[CANT_SERVICIOS] =
    {
        {20000,"Limpieza",250},
        {20001,"Parche",300},
        {20002,"Centrado",400},
        {20003,"Cadena",350},
    };
    eTrabajo trabajos[CANT_TRABAJOS];
    eBicicleta bicicletas[CANT_BICICLETAS];

    inicializarBicicletas(bicicletas,CANT_BICICLETAS);
    inicializarTrabajos(trabajos,CANT_TRABAJOS);

    do
    {
        switch(menuPrincipal())
        {
        case 1:
            altaBicicleta(bicicletas,CANT_BICICLETAS,&nextIdBicicleta,tipos,CANT_TIPOS,
                          colores,CANT_COLORES);
            system("pause");
            break;
        case 2:
            modificarBicicletas(bicicletas,CANT_BICICLETAS,tipos,CANT_TIPOS,colores,CANT_COLORES);
            system("pause");
            break;
        case 3:
            bajaBicicleta(bicicletas,CANT_BICICLETAS,tipos,CANT_TIPOS,colores,CANT_COLORES);
            system("pause");
            break;
        case 4:
            mostrarBicicletas(bicicletas,CANT_BICICLETAS,tipos,CANT_TIPOS,colores,CANT_COLORES);
            system("pause");
            break;
        case 5:
            mostrarTipos(tipos,CANT_TIPOS);
            system("pause");
            break;
        case 6:
            mostrarColores(colores,CANT_COLORES);
            system("pause");
            break;
        case 7:
            mostrarServicios(servicios,CANT_SERVICIOS);
            system("pause");
            break;
        case 8:
            altaTrabajo(trabajos,CANT_TRABAJOS,&nextIdTrabajo,bicicletas,
                        CANT_BICICLETAS,tipos,CANT_TIPOS,colores,CANT_COLORES,servicios,CANT_SERVICIOS);
            system("pause");
            break;
        case 9:
            mostrarTrabajos(trabajos,CANT_TRABAJOS);
            system("pause");
            break;
        case 10:
            getChar(&salir,"Desea Salir? \ns: Si\nn: No\nRespuesta: ","Opcion invalida!!\n",2);
            break;
        }
    }
    while(salir!='s');
    return 0;
}


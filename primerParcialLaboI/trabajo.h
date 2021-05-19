#include "fecha.h"
#include "bicicleta.h"
#include "servicio.h"

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct
{
    int id;
    int idBicicleta;
    int idServicio;
    eFecha fecha;
    int isEmpty;
} eTrabajo;


#endif // TRABAJO_H_INCLUDED

int altaTrabajo(eTrabajo trabajos[], int tam, int* idTrabajo,eBicicleta bicicletas[], int tamB,
                eTipo tipos[], int tamT, eColor colores[], int tamC,eServicio servicios[], int tamS);
int inicializarTrabajos(eTrabajo trabajos[], int tam);
int buscarLibreTrabajo(eTrabajo trabajos[], int tam);
int mostrarTrabajos(eTrabajo trabajos[], int tam);
void mostrarTrabajo(eTrabajo trabajo);

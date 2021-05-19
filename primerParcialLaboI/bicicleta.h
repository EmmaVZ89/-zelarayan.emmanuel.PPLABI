#include "tipo.h"
#include "color.h"

#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED

typedef struct
{
    int id;
    char marca[21];
    int idTipo;
    int idColor;
    float rodado;
    int isEmpty;
} eBicicleta;


#endif // BICICLETA_H_INCLUDED

int menuPrincipal();


int altaBicicleta(eBicicleta bicicletas[], int tam, int* idBicicleta, eTipo tipos[], int tamT,eColor colores[],int tamC);
int inicializarBicicletas(eBicicleta bicicletas[], int tam);
int buscarLibreBicicleta(eBicicleta bicicletas[], int tam);
int bajaBicicleta(eBicicleta bicicletas[], int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);
int buscarBicicleta(eBicicleta bicicletas[], int tam, int idBicicleta);
int mostrarBicicletas(eBicicleta bicicletas[], int tam, eTipo tipos[],int tamT, eColor colores[],int tamC);
int mostrarBicicleta(eBicicleta bicicleta,eTipo tipos[],int tamT,eColor colores[],int tamC);
int subMenuModificarBicicleta();
int modificarBicicletas(eBicicleta bicicletas[], int tam,eTipo tipos[],int tamT,eColor colores[],int tamC);

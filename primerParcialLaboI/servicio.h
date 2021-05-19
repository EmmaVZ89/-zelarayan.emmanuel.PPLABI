#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[26];
    float precio;
} eServicio;


#endif // SERVICIO_H_INCLUDED

int mostrarServicios(eServicio servicios[], int tam);
void mostrarServicio(eServicio servicio);

#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[21];
} eTipo;

#endif // TIPO_H_INCLUDED

int mostrarTipos(eTipo tipos[], int tam);
void mostrarTipo(eTipo tipo);
int cargarDescripcionTipo(int idTipo, eTipo tipos[], int tam, char desc[]);

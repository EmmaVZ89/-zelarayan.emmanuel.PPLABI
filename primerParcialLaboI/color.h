#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor[21];
} eColor;

#endif // COLOR_H_INCLUDED
int mostrarColores(eColor colores[], int tam);
void mostrarColor(eColor color);
int cargarNombreColor(int idColor, eColor colores[], int tam, char nombreColor[]);

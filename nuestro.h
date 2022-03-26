#ifndef nuestro_h
#define nuestro_h

typedef struct{
    int cantidad;
    char nombre[8];
} Reproduccion;

typedef struct{
    int cantidad;
    Reproduccion *lista;
} Biblioteca;

typedef struct{
    char *Nombre;
    char *Artista;
    char **genero;
    int year;
    Reproduccion *listaDeListas;
} Cancion;

void GuardarCanciones(FILE *, Biblioteca *);

#endif
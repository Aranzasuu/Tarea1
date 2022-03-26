#include <stdio.h>
#include <stdlib.h>
#include "list.h"


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

/*
void GuardarCanciones(FILE *archivo, Biblioteca *lista){
    char linea[1024];
    int i;

    fgets(linea, 1023, archivo);
    int k = 0;

    while(fgets(linea,1023,archivo) != NULL){
        for(i = 0; i < 13; i++){
            char *aux = get_csv_field(linea, i);
            printf("%s ",aux);
        }
        printf("\n");
        k++;
        if(k == 10) break;
    }
}

const char *get_csv_field (char *tmp, int k){
    int open_mark = 0;
    char *ret = (char*) malloc (100 * sizeof(char));
    int ini_i = 0, i = 0, j = 0;
    while(tmp[i + 1] != '\0'){

        if(tmp[i] == '\"'){
            open_mark = 1 - open_mark;
            if(open_mark) ini_i = i + 1;
            i++;
            continue;
        }

        if(open_mark || tmp[i] != ','){
            if(k == j) ret[i - ini_i] = tmp[i];
            i++;
            continue;
        }

        if(tmp[i] == ','){
            if(k == j) {
               ret[i - ini_i] = 0;
               return ret;
            }
            j++; 
            ini_i = i + 1;
        }
        i++;
    }
    if(k == j) {
       ret[i - ini_i] = 0;
       return ret;
    }
    return NULL;
}*/
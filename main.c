#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "nuestro.h"

int main(){

    printf("Ingresar nombre archivo: ");
    char *nombreArchivo;
    scanf("%s",nombreArchivo);
    FILE *archivo = fopen(nombreArchivo,"r");
    Biblioteca *General;
    int opcion, opcion2;

    while(1){
        printf("opción 1. Buscar Canción\n");
        printf("opción 2. Agregar Canción\n");
        printf("Ingresar opción a realizar =  ");
        scanf("%d",opcion);
        switch(opcion){
            case 1:
                printf("Buscar Nombre (1)\n");
                printf("Buscar Artista (2)\n");
                printf("Buscar Género (3)\n");
                scanf("%d",opcion2);
                switch(opcion2){
                    case 1:
                        printf("Ingresar Nombre: ");
                        break;
                    case 2:
                        printf("Ingresar Artista: ");
                        break;
                    case 3:
                        printf("Ingresar Género: ");
                        break;
                }
            case 2:
                printf("Aún no disponible");
        }
    }

    GuardarCanciones(archivo, General); // -> crear la función, repetidos()
    //BuscarCancion();
    //BuscarGenero();
    //BuscarArtista();cd 
    return 0;
}
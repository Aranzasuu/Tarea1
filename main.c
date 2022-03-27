#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "nuestro.h"

char *get_csv_field (char *tmp, int k){
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
}

int main(){

    printf("Ingresar nombre archivo: ");
    char *nombreArchivo;
    scanf("%s",nombreArchivo);
    FILE *archivo = fopen(nombreArchivo,"r");
    Biblioteca *General;
    int opcion, opcion2;
    printf("hola\n");
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
    /*while(1){
        printf("opcion 1. Buscar Cancion\n");
        printf("opcion 2. Agregar Cancion\n");
        printf("Ingresar opcion a realizar =  ");
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
                        printf("Ingresar Genero: ");
                        break;
                }
            case 2:
                printf("Aún no disponible");
        }
    }*/

     // -> crear la función, repetidos()
    //BuscarCancion();
    //BuscarGenero();
    //BuscarArtista();cd 
    return 0;
}
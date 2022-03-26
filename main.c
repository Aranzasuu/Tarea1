#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){

    printf("Ingresar nombre archivo: ");
    char *nombreArchivo;
    scanf("%s",nombreArchivo);
    FILE *archivo = fopen(nombreArchivo,"r");
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

    //GuardarCanciones(archivo, General); // -> crear la función, repetidos()
    //BuscarCancion();
    //BuscarGenero();
    //BuscarArtista();


    return 0;
}



/* int main()
{
    FILE *archivo = fopen("Canciones.csv", "r");
    char cadena[90];
    int i;
    int k = 0;
    while(fgets (cadena, 1, archivo) != NULL){
        for(i = 0; i < 6; i++){
            const char *aux = get_csv_field(cadena, i);
            printf(cadena);
        }
        printf("\n");
        k ++; 
        if(k == 10) break;
    }

    if (archivo == NULL) exit(EXIT_FAILURE);
      
}*/ 
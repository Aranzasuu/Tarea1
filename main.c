int main()
{
    FILE *archivo = fopen("Canciones.csv", "r");
    char cadena[70];
    int i;
    int k=0;
    while(fgets (cadena, 1, archivo) != NULL){
        for(i=0;i<6;i++){
            const char *aux = get_csv_field(cadena, i);
            printf(cadena);
        }
        printf("\n");
        k++; if(k==10) break;
    }

    if (archivo == NULL) exit(EXIT_FAILURE);
      
}
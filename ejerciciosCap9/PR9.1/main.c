#include <stdio.h>

/*Archivos y caracteres.
El programa escribe caracteres en un archivo. */

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w");

if (ar != NULL)
{
    while ((getchar()) != '\n')
        fputc(p1, ar);
    fclose(ar);

}
else
    printf("No se puede abrir el archivo");

}

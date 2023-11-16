#include <stdio.h>

/* Alumnos.
El programa lee bloques �variables de tipo estructura alumno� de un archivo
de acceso directo. */

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);
void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r")) != NULL)
        fclose(ar);
}
void lee(FILE *ap)
{


alumno alu;
fread(&alu, sizeof(alumno), 1, ap);
while (!feof(ap))
{
    printf("\nMatricula: %d", alu.matricula);
    printf("\nCarrera: %d", alu.carrera);
    printf("\nPromedio: %f\t ", alu.promedio);
    puts(alu.nombre);
    fread(&alu, sizeof(alumno), 1, ap);
}
}

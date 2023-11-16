#include <stdio.h>
/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;

void escribe(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "w")) != NULL)
        fclose(ar);
        else
            printf("\nEl archivo no se puede abrir");
        fclose(ar);
}

void escribr(FILE *ap)
{
   alumno alu;
   printf("\nDesea ingresar informacion sobre alumno? (si-1 no-0: ");
   scanf("%d", &r);
   while (r)
   {
       i++;
       printf("matricula del alumno %d: ", i);
       scanf("%d", &alu,matricula);
       printf("nombre del alumno %d: ", i);
       fflush(stdin);
       gets(alu.nombre);
       printf("carrera del alumno %d; , i");
       scanf("%d", &alu.carrera);
       printf("promedio del alumno %d: ", i);
       scanf("%f", &alu.promedio);

       fwrite(&alu, sizeof(alumno), 1, ap);
       printf("\nDesea ingresar informacion sobre mas alumnos? (si-1 no-0: ");
       scanf("%d", &r);
   }
}

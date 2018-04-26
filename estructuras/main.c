#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
}eAlumno;

void mostrarAlumnos(eAlumno clase[], int);
void mostrarUnAlumno(eAlumno clase[], int, int);

int main()
{
    eAlumno clase[T];
    int i;
    int alumno;

    for(i=0;i<T;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &clase[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(clase[i].nombre);
        printf("Ingrese promedio: ");
        scanf("%f", &clase[i].promedio);
    }

    printf("Legajo: ");
    scanf("%d", &alumno);
    mostrarAlumnos(clase, T);
    mostrarUnAlumno(clase, T, alumno); //copiar funcion para buscar alumno por legajo

    return 0;
}

void mostrarAlumnos(eAlumno clase[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d %s %f\n", clase[i].legajo, clase[i].nombre, clase[i].promedio);
    }
}
void mostrarUnAlumno(eAlumno clase[], int tam, int cual)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(i == cual)
        {
            printf("%d %s %f\n", clase[i].legajo, clase[i].nombre, clase[i].promedio);
        }
    }
}

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

void mostrar(eAlumno clase[], int);

int main()
{
    eAlumno clase[T];
    int i;

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

    mostrar(clase, T);

    return 0;
}

void mostrar(eAlumno clase[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d %s %f\n", clase[i].legajo, clase[i].nombre, clase[i].promedio);
    }
}

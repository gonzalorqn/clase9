#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char calle[50];
    int numero;
    char localidad[50];
    int piso;
    char dpto;
    int cp;
}eDomicilio;

typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;

}eAlumno;

int main()
{
    eAlumno miAlumno[10];

    miAlumno[0].legajo = 400;
    miAlumno[0].domicilio.cp = 1870;

    printf("legajo: %d --- cp: %d",miAlumno[0].legajo, miAlumno[0].domicilio.cp);
    return 0;
}

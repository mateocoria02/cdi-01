#include <stdio.h>

int main (void) {

    char nombre [32];
    char apellido [32];
    printf("Ingrese nombre: ");
    scanf("%s", nombre);
    printf ("Ingrese apellido: ");
    scanf("%s", apellido);
    printf("Hola %s %s!", nombre, apellido );

    return 0;
}
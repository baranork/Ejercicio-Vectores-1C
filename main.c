#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

#define T 5

int main()
{
    int numeros[T];
    int mayor;
    int valorBusqueda;

    cargarVector(numeros, T);

    mayor = contarMayor(numeros, T);

    printf("El numero maximo ingresado es %d\n", mayor);

    printf("Ingrese el numero que desea encontrar: ");
    scanf("%d", &valorBusqueda);

    buscarValor(numeros, T, valorBusqueda);

    mostrarVector(numeros, T);

    return 0;
}

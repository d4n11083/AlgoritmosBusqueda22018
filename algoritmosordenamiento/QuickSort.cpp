//
// Created by Josue Chaves on 30/8/18.
//

#include "QuickSort.h"

int QuickSort::dividir(int *array, int inicio, int final) {
    int izquierda;
    int derecha;
    int pivote;
    int temporal;

    pivote = array[inicio];
    izquierda = inicio;
    derecha = final - 1;

    // Mientras no se cruzen los índices
    while (izquierda < derecha) {
        while (array[derecha] > pivote) {
            derecha--;
        }

        while ((izquierda < derecha) && (array[izquierda] <= pivote)) {
            izquierda++;
        }

        // Si todavía no se cruzan los indices seguimos intercambiando
        if (izquierda < derecha) {
            temporal = array[izquierda];
            array[izquierda] = array[derecha];
            array[derecha] = temporal;
        }
    }

    // Los índices ya se han cruzado, ponemos el pivote en el lugar que le corresponde
    temporal = array[derecha];
    array[derecha] = array[inicio];
    array[inicio] = temporal;

    // La nueva posición del pivote
    return derecha;
}

void QuickSort::quickSort(int *array, int inicio, int final)
{
    int pivote;

    if (inicio < final) {
        pivote = dividir(array, inicio, final);

        // Ordeno la lista de los menores
        quickSort(array, inicio, pivote - 1);

        // Ordeno la lista de los mayores
        quickSort(array, pivote + 1, final);
    }
}
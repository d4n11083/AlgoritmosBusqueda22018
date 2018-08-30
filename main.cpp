#include <iostream>
#include "busquedasecuencial/BusquedaSecuencial.h"

void cantidad( int *arr ){

    int cant = sizeof(arr);

    std::cout <<"tamano es de " << cant;

}


int main() {

    int arr[4];

    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 7;
    arr[3] = 10;


    int cantidad = sizeof(arr)/ sizeof(arr[0]);
    int *ptr = arr + (cantidad - 1);

    BusquedaSecuencial *t = new BusquedaSecuencial(10,arr,cantidad);



    int *medio = arr + ( (4/2) -1 );

    std::cout << *medio;
    return 0;
}
//
// Created by d4n11083 on 29/08/18.
//

#ifndef ALGORITMOSBUSQUEDA22018_BUSQUEDABINARIA_H
#define ALGORITMOSBUSQUEDA22018_BUSQUEDABINARIA_H

#include "iostream"

class BusquedaBinaria {

private:
    int final;
    int medio;
    int inicio;
    int tamanoArray = 0;
    int valorBuscar = 0;
    int *array = nullptr;

public:

    BusquedaBinaria( int arr[], int pTamanoArray, int pValorBuscar ){
        array = arr;
        tamanoArray = pTamanoArray;
        valorBuscar = pValorBuscar;
        inicio = 0;
        final = pTamanoArray - 1;
        medio = ( inicio + final ) /2;
    }

    std::string buscar();

};


#endif //ALGORITMOSBUSQUEDA22018_BUSQUEDABINARIA_H

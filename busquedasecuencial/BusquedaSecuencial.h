#ifndef ALGORITMOSBUSQUEDA22018_BUSQUEDASECUENCIAL_H
#define ALGORITMOSBUSQUEDA22018_BUSQUEDASECUENCIAL_H


#include <iostream>

class BusquedaSecuencial{

private:
    int encontrar;
    int tamanoArray;
    int *arrayBusqueda = nullptr;

public:
    BusquedaSecuencial( int pEncontrar, int pArrayBusqueda[], int pTamano ){
        encontrar = pEncontrar;
        arrayBusqueda = pArrayBusqueda;
        tamanoArray = pTamano;

    }

    std::string buscar();

};

#endif //ALGORITMOSBUSQUEDA22018_BUSQUEDASECUENCIAL_H

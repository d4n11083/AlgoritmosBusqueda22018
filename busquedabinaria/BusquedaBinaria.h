//
// Created by d4n11083 on 29/08/18.
//

#ifndef ALGORITMOSBUSQUEDA22018_BUSQUEDABINARIA_H
#define ALGORITMOSBUSQUEDA22018_BUSQUEDABINARIA_H


class BusquedaBinaria {
private:
    int *final = nullptr;
    int *medio = nullptr;
    int *inicio = nullptr;
    int tamanoArray = 0;
    int valorBuscar = 0;

public:

    BusquedaBinaria( int arr[], int pTamanoArray, int pValorBuscar ){
        tamanoArray = pTamanoArray;
        valorBuscar = pValorBuscar;
        inicio = arr;
        final = arr + (pTamanoArray - 1);

        if( tamanoArray % 2 == 0  ){
            medio = arr + ( (tamanoArray/2) - 1);
        }else{
            medio = arr + ( tamanoArray/2 );
        }

    }

    ~BusquedaBinaria(){
        delete( final );
        delete( medio );
        delete( inicio );
    }

    void buscar();

};


#endif //ALGORITMOSBUSQUEDA22018_BUSQUEDABINARIA_H

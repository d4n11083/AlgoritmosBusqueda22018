#include <string>
#include "BusquedaSecuencial.h"

std::string BusquedaSecuencial::buscar() {

    if( *arrayBusqueda == encontrar ){
        return "\nElemento encontrado en posición: 1";
    }

    if( *(arrayBusqueda + tamanoArray-1) == encontrar ){
        return "\nElemento encontrado en posición: " + std::to_string(tamanoArray + 1);
    }

    for (int i = 1; i < tamanoArray-1 ; i++) {
        if( *(arrayBusqueda + i) == encontrar ){
            return "\nElemento encontrado en posición: " + std::to_string(i + 1);
        }
    }

    return "Elemento no encontrado.";
}
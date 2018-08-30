#include "BusquedaBinaria.h"

std::string BusquedaBinaria::buscar() {

    while( inicio <= final ){
        medio = ( inicio + final ) / 2;
        if( valorBuscar == *(array + medio)){
            return "Elemento Encontrado en la Posición: " + std::to_string (medio + 1 );
        }else{
            if( *(array + medio) > valorBuscar ){
                final = medio - 1;
            } else {
                inicio = medio + 1;
            }
        }
    }
    return "Elemento no Encontrado";
}
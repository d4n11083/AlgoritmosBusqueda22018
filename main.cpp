#include <iostream>
#include "busquedasecuencial/BusquedaSecuencial.h"
#include "busquedabinaria/BusquedaBinaria.h"
#include "algoritmosordenamiento/QuickSort.h"


int main() {
    int opcion = 0;
    int cantidadElementos = 0;
    int elementoEncontrar = 0;

    do{
        std::cout << "Eliga una opción:" << std::endl;
        std::cout <<"1 = Búsqueda Binaria." << std::endl;
        std::cout <<"2 = Búsqueda Secuencial."<< std::endl;
        std::cout <<"3 = Salir." << std::endl;
        std::cin >> opcion;

        switch (opcion){
            case 1: {
                std::cout << " Búsqueda Binaria " << std::endl;
                std::cout << "¿Cuántos elementos desea ingresar? " << std::endl;
                std::cin >> cantidadElementos;
                int arregloElementos[cantidadElementos];
                for (int i = 0; i < cantidadElementos ; i++) {
                    std::cout << "Ingrese el número con índice: " << i << std::endl;
                    std::cin >> arregloElementos[i];
                }
                std::cout << "\n*Imprimiendo Lista*" << std::endl;
                for (int i = 0; i < cantidadElementos; i++) {
                    std::cout << arregloElementos[i] << ",";
                }

                QuickSort *QS = new QuickSort();
                QS->quickSort(arregloElementos,0,cantidadElementos);

                std::cout << "\n*Imprimiendo Lista Ordenada*" << std::endl;
                for (int i = 0; i < cantidadElementos; i++) {
                    std::cout << arregloElementos[i] << ",";
                }
                std::cout << "\n*******************" << std::endl;
                std::cout << "\n¿Cúal número desea encontrar?" << std::endl;
                std::cin >> elementoEncontrar;

                BusquedaBinaria *bb = new BusquedaBinaria(arregloElementos, cantidadElementos, elementoEncontrar);
                std::cout << bb->buscar() << std::endl;

                delete bb;
                delete QS;

                std::cout << "\n\n";
                break;
            }
            case 2: {

                std::cout << " Búsqueda Secuencial " << std::endl;
                std::cout << "¿Cuántos elementos desea ingresar? " << std::endl;
                std::cin >> cantidadElementos;
                int arregloElementos[cantidadElementos];
                for (int i = 0; i < cantidadElementos; i++) {
                    std::cout << "Ingrese el número con índice: " << i << std::endl;
                    std::cin >> arregloElementos[i];
                }
                std::cout << "\n*Imprimiendo lista*" << std::endl;
                for (int i = 0; i < cantidadElementos; i++) {
                    std::cout << arregloElementos[i] << ",";
                }
                std::cout << "\n*******************" << std::endl;
                std::cout << "\n¿Cúal número desea encontrar?" << std::endl;
                std::cin >> elementoEncontrar;

                BusquedaSecuencial *bb = new BusquedaSecuencial(elementoEncontrar, arregloElementos, cantidadElementos);
                std::cout << bb->buscar() << std::endl;
                delete bb;
                std::cout << "\n\n" << std::endl;
                break;
            }

            case 3:{
                std::cout << "\nSaliendo del programa." << std::endl;
                std::cout << "*********Programa Terminado*********" << std::endl;
                opcion = -1;
                break;
            }

            default: {
                std::cout << "\n\tError, Opción Incorrecta. " << std::endl;
            }
        }

    }while (opcion != -1);
    return 0;
}
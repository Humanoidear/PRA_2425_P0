#include <iostream>
#include "BrazoRobotico.h"

int main() {
    // Crear una instancia del BrazoRobotico en la posición inicial (0, 0, 0)
    BrazoRobotico brazo;

    // Mostrar la posición inicial
    std::cout << "Posición inicial del brazo: (" 
              << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;

    // Mover el brazo a una nueva posición (3.0, 4.0, 5.0)
    brazo.mover(3.0, 4.0, 5.0);
    std::cout << "Brazo movido a la nueva posición: (" 
              << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;

    // Comprobar si el brazo está sujetando un objeto
    if (!brazo.estaSujetando()) {
        std::cout << "El brazo no está sujetando ningún objeto." << std::endl;
    }

    // Hacer que el brazo coja un objeto
    brazo.coger();
    std::cout << "El brazo ha cogido un objeto." << std::endl;

    // Comprobar de nuevo si el brazo está sujetando un objeto
    if (brazo.estaSujetando()) {
        std::cout << "El brazo está sujetando un objeto." << std::endl;
    }

    return 0;
}


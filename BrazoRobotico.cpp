#include "BrazoRobotico.h"

// Constructor
BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando)
    : x(x), y(y), z(z), sujetandoObjeto(sujetando) {}

// Métodos consultores
double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::estaSujetando() const {
    return sujetandoObjeto;
}

// Método para coger un objeto
void BrazoRobotico::coger() {
    if (!sujetandoObjeto) {
        sujetandoObjeto = true;
    }
}

// Método para soltar un objeto
void BrazoRobotico::soltar() {
    if (sujetandoObjeto) {
        sujetandoObjeto = false;
    }
}

// Método para mover el brazo a una nueva posición
void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
}


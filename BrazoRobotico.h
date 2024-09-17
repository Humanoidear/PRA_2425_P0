#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;     // Coordenadas de la extremidad
    bool sujetandoObjeto; // Indica si el robot está sujetando un objeto

public:
    // Constructor
    BrazoRobotico(double x = 0.0, double y = 0.0, double z = 0.0, bool sujetando = false);

    // Métodos consultores (getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    // Método para coger un objeto
    void coger();

    // Método para soltar un objeto
    void soltar();

    // Método para mover el brazo a una nueva posición
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif // BRAZOROBOTICO_H


#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    int salarioBase;

public:
    Empleado(std::string nombre, int salarioBase);
    virtual ~Empleado();
    std::string getNombre();
    int getSalarioBase();
    virtual int calcularSalario();
    void mostrarSalario();
};

#endif

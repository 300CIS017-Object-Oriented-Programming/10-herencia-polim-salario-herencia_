#ifndef SENIOR_H
#define SENIOR_H

#include "Empleado.h"

class Senior : public Empleado {
public:
    Senior(std::string nombre, int salarioBase);
    int calcularSalario();
};

#endif
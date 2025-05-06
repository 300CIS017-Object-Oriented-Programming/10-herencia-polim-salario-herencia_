#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(std::string nombre, int salarioBase);
    int calcularSalario();
};

#endif
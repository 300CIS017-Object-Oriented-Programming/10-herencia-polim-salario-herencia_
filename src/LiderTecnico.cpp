#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(std::string nom, int salario) : Empleado(nom, salario) {
}

int LiderTecnico::calcularSalario() {
    return salarioBase + (salarioBase * 25 / 100);
}
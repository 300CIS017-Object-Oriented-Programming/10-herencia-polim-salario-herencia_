#include "Junior.h"

Junior::Junior(std::string nom, int salario) : Empleado(nom, salario) {
}

int Junior::calcularSalario() {
    return salarioBase;
}
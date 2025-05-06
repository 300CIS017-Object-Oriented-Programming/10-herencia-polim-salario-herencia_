#include "Senior.h"

Senior::Senior(std::string nom, int salario) : Empleado(nom, salario) {
}

int Senior::calcularSalario() {
    return salarioBase + (salarioBase * 20 / 100);
}

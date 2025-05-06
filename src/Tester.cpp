#include "Tester.h"

Tester::Tester(std::string nom, int salario) : Empleado(nom, salario) {
}

int Tester::calcularSalario() {
    return salarioBase + (salarioBase * 5 / 100);
}
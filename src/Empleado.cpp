#include "Empleado.h"
#include <iostream>

Empleado::Empleado(std::string nom, int salario) {
    nombre = nom;
    salarioBase = salario;
}

Empleado::~Empleado() {
}

std::string Empleado::getNombre() {
    return nombre;
}

int Empleado::getSalarioBase() {
    return salarioBase;
}

int Empleado::calcularSalario() {
    return salarioBase;
}

void Empleado::mostrarSalario() {
    std::cout << "Empleado: " << nombre << ", Salario: " << calcularSalario() << std::endl;
}
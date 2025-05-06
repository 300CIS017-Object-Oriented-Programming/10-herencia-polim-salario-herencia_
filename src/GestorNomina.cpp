#include "GestorNomina.h"
#include "Junior.h"
#include "Senior.h"
#include "LiderTecnico.h"
#include "Tester.h"
#include <iostream>

GestorNomina::GestorNomina() {
}

void GestorNomina::inicializarDatos() {
    int salarioJunior = 1000000;
    int salarioSenior = 1200000;
    int salarioLider = 1500000;
    int salarioTester = 1050000;

    empleados.push_back(new Junior("Ana", salarioJunior));
    empleados.push_back(new Junior("Luis", salarioJunior));
    empleados.push_back(new Senior("Carlos", salarioSenior));
    empleados.push_back(new Senior("Lucia", salarioSenior));
    empleados.push_back(new LiderTecnico("Andres", salarioLider));
    empleados.push_back(new LiderTecnico("Sandra", salarioLider));
    empleados.push_back(new Tester("Diego", salarioTester));
    empleados.push_back(new Tester("Mariana", salarioTester));
}

void GestorNomina::mostrarTodos() {
    for (int i = 0; i < empleados.size(); i++) {
        empleados[i]->mostrarSalario();
    }
}

int GestorNomina::calcularTotal() {
    int total = 0;
    for (int i = 0; i < empleados.size(); i++) {
        total = total + empleados[i]->calcularSalario();
    }
    return total;
}

void GestorNomina::liberarMemoria() {
    for (int i = 0; i < empleados.size(); i++) {
        delete empleados[i];
    }
    empleados.clear();
}
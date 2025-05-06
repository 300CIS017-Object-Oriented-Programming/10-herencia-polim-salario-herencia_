#ifndef GESTORNOMINA_H
#define GESTORNOMINA_H

#include <vector>
#include "Empleado.h"

class GestorNomina {
private:
    std::vector<Empleado*> empleados;

public:
    GestorNomina();
    void inicializarDatos();
    void mostrarTodos();
    int calcularTotal();
    void liberarMemoria();
};

#endif
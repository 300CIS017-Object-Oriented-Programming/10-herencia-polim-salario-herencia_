#include <iostream>
#include "GestorNomina.h"

using namespace std;

int main() {
    GestorNomina sistema;
    int opcion;

    sistema.inicializarDatos();

    do {
        cout << "\n===== MENU NOMINA =====" << endl;
        cout << "1. Mostrar salarios de empleados" << endl;
        cout << "2. Calcular total de la nomina" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            sistema.mostrarTodos();
        } else if (opcion == 2) {
            int total = sistema.calcularTotal();
            cout << "Total de la nomina: " << total << endl;
        } else if (opcion == 3) {
            cout << "Cerrando sistema..." << endl;
        } else {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 3);

    sistema.liberarMemoria();

    return 0;
}
//Hacer una simulacion del metro de quito con los pagos.


#include <iostream>
#include <iomanip>
using namespace std;

void recargar(double &saldo, double monto) {
    saldo += monto;
    cout << "Recarga Completada. Saldo: $" << fixed << setprecision(2) << saldo << endl;
}

bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {
        saldo -= tarifa;
        cout << "Saldo actual: $" << fixed << setprecision(2) << saldo << endl;
        return true;
    } else {
        cout << "Saldo insuficiente. No se puede pagar.";
        return false;
    }
}

void mostrarEstado(double saldo, int pasadas) {
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << fixed << setprecision(2) << saldo << endl;
}

int main() {
    double saldo = 0.0;
    int pasadas = 0;
    double montoRecarga;
    double tarifa = 0.45;

    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Saldo actual: $0.00" << endl;

    cout << "Ingrese monto a recargar: ";
    cin >> montoRecarga;

    recargar(saldo, montoRecarga);

    cout << "\nPagando pasaje de $0.45 ..." << endl;
    if (pagar(saldo, tarifa)) {
        pasadas++;
    }

    cout << "\nPagando pasaje de $0.45 ..." << endl;
    if (pagar(saldo, tarifa)) {
        pasadas++;
    }

    mostrarEstado(saldo, pasadas);

    return 0;
}
//Andraunio Mateo

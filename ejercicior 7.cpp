//Contar cuántos números son pares en un arreglo

#include <iostream>
using namespace std;

int contarPares(int arreglo[], int cantidad) {
    int pares = 0;

    for (int i = 0; i < cantidad; i++) {
        if (arreglo[i] % 2 == 0) {
            pares++;
        }
    }

    return pares;
}

int main() {
    int n;

    cout << "Cuantos numeros deseas ingresar? ";
    cin >> n;

    int numeros[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int totalPares = contarPares(numeros, n);

    cout << "La cantidad de numeros pares es: " << totalPares << endl;

    return 0;
}
//Andramunio Mateo

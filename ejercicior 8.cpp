//Calcular y retornar el promedio de los elementos.
#include <iostream>
#include <iomanip> 
using namespace std;

double calcularPromedio(int arreglo[], int tam) {
    int suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += arreglo[i];
    }

    return (double)suma / tam;
}

int main() {
    int n;

    cout << "Numeros para el promedio: ";
    cin >> n;

    int numeros[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    double promedio = calcularPromedio(numeros, n);

    cout << fixed << setprecision(2);
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
//Andramunio Mateo

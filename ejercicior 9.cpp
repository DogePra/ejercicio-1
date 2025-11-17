//Generar una factura aplicando descuentos según cantidad y subtotal.

#include <iostream>
using namespace std;

string nombre;
double precio;
int cantidad;

void carDatos(){
    cout<<"Nombre del producto: ";
    cin>>nombre;

    cout<<"Precio unitario: ";
    cin>>precio;

    cout<<"Cantidad: ";
    cin>>cantidad;
    
}

double calcSubtotal(double precio, int cantidad)
{
    return precio * cantidad;
    
}

double calcDescuentos(double subtotal, int cantidad){
	
    double desc = 0;

    if (cantidad == 2)
        desc += subtotal * 0.10;
    else if (cantidad >= 3)
        desc += subtotal * 0.15;

    if (subtotal > 200)
        desc += subtotal * 0.05;

    return desc;
    
}

void aplicarDescuentos(double subtotal, double descuento, double &total){
	
    total = subtotal - descuento;
    
}

void mostrarFactura(double subtotal, double descuento, double total){
	
    cout << " === FACTURA === "<<endl;
    cout << "Producto: " << nombre << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Descuentos: " << descuento << endl;
    cout << "Total final: " << total << endl;
    
}

int main(){

    carDatos();

    double subtotal = calcSubtotal(precio, cantidad);
    double descuento = calcDescuentos(subtotal, cantidad);

    double total = 0;
    aplicarDescuentos(subtotal, descuento, total);

    mostrarFactura(subtotal, descuento, total);

    return 0;
}
//Andramunio Mateo


//Calcular el precio final de un producto aplicando dos descuentos: 15% por promoción y 10% por cliente frecuente.
#include <iostream>

using namespace std;

double calcularDescuento(double precio, double porcentaje){
	
	double costo = precio*(porcentaje/100);
	
	return costo;
}


double PrecioFinal(double pBase, double Promo, double Cliente){
	
	double descuento1= 0, descuento2 = 0;
	
	descuento1 = calcularDescuento(pBase, Promo);
	descuento2 = calcularDescuento(pBase, Cliente);
	
	double total = pBase - descuento1 - descuento2;
	
	return total;
}

int main(){
	
	double precio = 0, promo = 0, cliente = 0;
	
	cout<<"Ingrese el precio del producto: ";
	cin>>precio;
	
	cout<<"Ingrese el descuento por promocion: ";
	cin>>promo;
	
	cout<<"Ingrese el descuento por cliente: ";
	cin>>cliente;
	
	double Promoc = calcularDescuento(precio,promo);
	double Clin = calcularDescuento(precio, cliente);
	double total = PrecioFinal(precio, promo, cliente);
	
	cout<<" === Datos === "<<endl;
	cout<<"Descuento por promocion: $"<<Promoc<<endl;
	cout<<"Descuento por cliente: $"<<Clin<<endl;
	cout<<"Total: $"<<total<<endl;
	
	return 0;
	
}
//Andramunio MAteo

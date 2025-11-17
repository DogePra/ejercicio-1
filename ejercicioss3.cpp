//Calificaciones de 4 estudiantes en un arreglo y mostrarlas con una función void.

#include <iostream>

using namespace std;

void Calificaciones(double notas []){
	
	for (int x=1; x<=4; x++)
	{
		cout<<"Calificacion "<<x<<": ";
		cout<<notas[x]<<endl;
	}

}


int main(){
	
	double nota [4];
	
	cout<<"Ingrese la calificacion de los estudiantes"<<endl;
	
	for (int i=1; i<=4; i++)
	{
		cin>>nota[i];
	}
	
	Calificaciones(nota);
	
	return 0;
	
}
//Andramunio Mateo

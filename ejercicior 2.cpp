//Ingresar 5 números enteros en un arreglo y mostrarlos usando una función void.

#include <iostream>

using namespace std;

void Arreglo(int Numero[]){
	
	cout<<"Valores Ingresados"<<endl;
	for (int x=1; x<=5; x++)
	{
		cout<<Numero[x]<<endl;
	}
	
}


int main(){
	
	int num[5];
	
	for (int i=1; i<=5; i++)
	{
		cout<<"Ingrese valor "<<i<<": ";
		cin>>num[i];
	}
	
	Arreglo(num);
	
	return 0;
	
}

//Andramunio Mateo

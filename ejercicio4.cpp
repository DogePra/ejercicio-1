//Leer 5 números enteros y suma total(paso por referencia).

#include <iostream>

using namespace std;

void Arreglo(int Num[], int &suma){
	
	suma = 0;
	
	for(int x = 0; x <=4; x++)
	{
		suma += Num[x];
	}
	
}

int main(){
	
	int num[5];
	int pos;
	int total = 0;
	
	cout<<"Ingrese 5 valores"<<endl;
	for (int i=0; i<=4; i++)
	{
		cin>>num[i];
	}
	
	cout<<"Ingrese la valor a eliminar (0 - 4)"<<endl;
	cin>>pos;
	
	num[pos] = 0;
	
	Arreglo(num, total);
	
	cout<<"El resultado es "<<total<<endl;;
	
	return 0;
}
//Andramunio Mateo

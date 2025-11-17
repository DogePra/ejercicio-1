//Guardar números en un arreglo y ver cuál es el mayor usando la funcion (con referenecia).

#include <iostream>

using namespace std;

void Valormayor(int Arreglo[], int &May, int num){
	
	May = Arreglo[0];
	
	for (int x=0; x<num; x++)
	{
		if (Arreglo[x] > May)
		{
			May = Arreglo[x];
		}
	}
}

int main (){
	
	int num, mayor = 0;
	int Arreglo[num];
	
	cout<<"Valores a ingresar: ";
	cin>>num;
	
	cout<<"Ingrese los valores"<<endl;
	for (int i=0; i<num;i++)
	{
		cin>>Arreglo[i];
	}
	
	Valormayor(Arreglo, mayor, num);
	
	
	cout<<"El valor mayor es: "<<mayor;
	
	return 0;
}

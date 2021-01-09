#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double h, x;
	
	x=0;
	
	cout<<"Para terminar ingrese el numero 100."<<endl;
	
	while(h!=100)
	{
		x = x+h;
		
		cout<<"La suma es de numeros ingresados hasta el momento es de: "<<x<<endl;
		
		cout<<"Introduzca un numero: ";
		cin>>h;
		
	}
	
	
	cout<<"El total de la sumatoria es de "<<x<<endl;
	
	return 0;
}

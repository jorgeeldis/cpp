#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"Ingrese porfavor el valor a: ";
	cin>>a;
	
	cout<<"Ingrese porfavor el valor b: ";
	cin>>b;
	
	cout<<"Ingrese porfavor el valor c: ";
	cin>>c;
	
	if(a!=b && b!=c && c!=a)
	{
		cout<<"Los valores son aptos para un triangulo rectangulo escalenos. ";
	}
	else
	{
		cout<<"Hay lados iguales por lo tanto, es un triangulo rectangulo isosceles. ";
	}
	
	return 0;
	
}

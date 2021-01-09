#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double h, x;
	
	cout<<"Para terminar ingrese el numero 100."<<endl;
	
	while(h!=100)
	{
		cout<<"Ingrese un numero: ";
		cin>>h;
		
		if(h<0)
		{
			x=x+1;
			cout<<"el numero de negativos es de: "<<x<<endl;
		}
		
	}
	
	
	cout<<"El total de numeros negativos es de: "<<x<<endl;
	
	return 0;
}

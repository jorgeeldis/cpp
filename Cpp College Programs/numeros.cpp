#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int x,y;
	
	cout<<"Porfavor introduzca un numero entero(x): ";
	cin>>x;
		
	cout<<"Porfavor introduzca otro numero entero(y): ";
	cin>>y;
	
	if(x>y){
		cout<<"El numero "<<x;
		cout<<" es mayor que "<<y;
	}
	else if(x==y){
		cout<<"Los numeros son iguales, intente de nuevo.";
	}
	
	else{
		cout<<"El numero "<<y;
		cout<<" es mayor que "<<x;
	}
	
	return 0;
	
}

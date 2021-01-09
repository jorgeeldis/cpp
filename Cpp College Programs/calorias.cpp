#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float peso, calorias, a;
	
	cout << "Presione 5 y enter para comenzar ";
    cin >> a;
	
	while(a!=0){
	
	
	cout<<"Porfavor introduzca el peso en libras: ";
	cin>>peso;
	
	calorias = peso * 19;
	
	cout<<"Usted necesita "<<calorias;
	cout<<" calorias por dia. "<<endl;
	
	cout<<"Presione 0 si quiere salir del programa, o 1 si quiere quedarse ";
	cin>>a;
	
	
}	
	
	return 0;
}

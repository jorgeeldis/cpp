#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double dias, horas, min;
	
	cout<<"Porfavor introduzca minutos: ";
	cin>>min;
	
	dias = min * 0.000694444;
	horas = min * 0.0166667;
	
	cout<<"Los dias acorde los minutos son: "<<dias<<endl;
	cout<<"Las horas acorde los minutos son: "<<horas<<endl;
	cout<<"Los minutos son: "<<min<<endl;
	
	return 0;
	
}

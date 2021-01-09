#include <iostream>
#include <math.h>
 
using namespace std;

int main(){
	
	int litros;
	double hours;
	int metros_cubicos;
	int litros_1;
	int minutos;
	int minutos_1;
	double hora;
	
	cout<<"tenemos un tanque con 50 metros cubicos. "<<endl;
	
	metros_cubicos=50;
	litros=metros_cubicos*1000;
	litros_1=1;
	minutos=1;
	hora=1.0/60.0;
	
	minutos_1=litros*(minutos/litros_1);
	
	cout << "El tanque se llenara en " << minutos_1 << " minutos " <<endl;
	
	hours=minutos_1*hora;
	
	cout << "El tanque se llenara en " << hours << " Horas ";
	
	return 0;
	
}

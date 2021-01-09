/*

	Volumen y Radio de una esfera

*/

#include <iostream>
#include <math.h>

int main(){
	
	using namespace std;
	
	double r,A,V,pi;
	pi=3.14159;
	
	cout<<"Introduzca el radio de la esfera: ";
	cin>>r;
	
	cout<<"Recuerde que la formula de el area de una esfera es: A = 4*pi*(r**2)"<<endl;
	cout<<"Recuerde que la formula de el volumen de una esfera es: V = (4/3)*pi*(r**3)"<<endl;
	
	A=4*pi*pow(r,2);
	V=(4/3)*pi*pow(r,3);
	
	cout<<"El area de la esfera es: "<<A<<endl;
	cout<<"El volumen de la esfera es: "<<V<<endl;
	
	return 0;
	
	
}



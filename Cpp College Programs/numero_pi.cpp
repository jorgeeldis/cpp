#include <iostream>
#include <math.h>

using namespace std;

	double x,y,z,pi;


void potencia(){
	cout<<"Introduzca una potencia del 2 al 10 para el numero pi. ";
	cin>>x;
}

void potencia_2(){
	y=pow(pi,x);
	cout<<"El numero pi, elevado a la "<<x;
	cout<<" potencia, es igual a "<<y<<endl;
}

void error(){
	cout<<"Usted ha introducido un numero fuera del rango requerido."<<endl;
}

void raiz(){
	z=sqrt(x);
	cout<<"La raiz cuadrada de la potencia es igual a: "<<z<<endl;
	
}

int suma(int a, int b){

	return a+b;
	
}

int main(){
	
	pi=3.14159;
	
	potencia();
	
	if(x>=2 && x<=10)
	{
		potencia_2();
	}
	else
	{
		error();
	}
	
	raiz();
	
	int sumatotal = suma(2,2);
	
	cout<<"Suma Total. "<<sumatotal<<endl;
	
	return 0;
	
}

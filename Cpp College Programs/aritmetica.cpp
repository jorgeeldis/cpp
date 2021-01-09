#include <iostream>
#include <math.h>

using namespace std;

//float a, b, c, d;
float suma(float a, float b)
{
	return (a + b);
}

float resta(float a, float b)
{
	return (a - b);
}

float multiplicacion(float a, float b)
{
	return (a * b);
}

float division(float a, float b)
{
	return (a / b);
}

int main()
{
	
	float a, b, result;
	int tipo_operacion;
	
	//cout Sistema de operaciones matematicas
	
	cout<<"Introduzca un numero: ";
	cin>>a;
	
	cout<<"Introduzca otro numero: ";
	cin>>b;
	
	cout<<"Introduzca "<<endl<<"1 para suma "<<endl<<"2 para resta "<<endl<<"3 para multiplicacion "<<endl<<"4 para division "<<endl;
	cin>>tipo_operacion;
	
	switch(tipo_operacion){
		case 1:
			result = suma(a, b);
			cout<<"La suma entre "<<a<<" y "<<b<<" es de "<<result<<endl;
			break;
		case 2:
			result = resta(a, b);
			cout<<"La resta entre "<<a<<" y "<<b<<" es de "<<result<<endl;
			break;
		case 3:
			result = multiplicacion(a, b);
			cout<<"La multiplicacion entre "<<a<<" y "<<b<<" es de "<<result<<endl;
		case 4:
			result = division(a, b);
			cout<<"La division entre "<<a<<" y "<<b<<" es de "<<result<<endl;
		default:
			cout<<"Usted ha introducido una opcion no valida.";
			break;
			
	}

	return 0;
	
}

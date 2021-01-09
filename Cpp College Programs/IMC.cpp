#include <iostream>
#include <math.h>

using namespace std;

	int w;
	float imc, h;	

int peso(){
	cout<<"Porfavor ingrese su peso en kg: ";
	cin>>w;
}

int altura(){
	cout<<"Porfavor ingrese su altura en m: ";
	cin>>h;
}

int imc_1(){
	imc = w/pow(h,2);
}

int calculo(){
	if(imc >= 20 && imc <= 25)
	{
		cout<<"Su indice corporal esta en el rango normal. Entre 20 y 25: "<<imc<<endl;
	}
	else
	{
		cout<<"Su indice corporal esta en el rango anormal. Entre 20 y 25 es el normal:  "<<imc<<endl;
	}
}

int main(){
	
	
	peso();
	
	altura();
	
	imc_1();
	
	calculo();
	
	return 0;
}

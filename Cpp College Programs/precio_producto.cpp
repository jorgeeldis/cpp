#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a,cont;
	double b,c,d,acumb;
	cont=0;
	acumb=0;
	
	cout<<"Porfavor introduzca cantidad de elementos comprados: ";
	cin>>a;
	
	if(a>0)
	{
		while(cont<a)
	{
	cout<<"Porfavor introduzca el precio total del producto: ";
	cin>>b;
	if(b>0)
	{
	cont=cont+1;
	acumb=b+acumb;
	}
	else
	{
		cout<<"Su precio es erroneo."<<endl;
	}
	}
	}
	else
	{
		cout<<"Su valor de elementos es erroneo"<<endl;
		
	}
	if(acumb>0)
	{
	cout<<"Valor total de la cuenta: "<<acumb<<endl;
	}
	else
	{
		cout<<"Valor total erroneo."<<endl;
	}
	cout<<"Porfavor introduzca el precio pagado por el cliente: ";
	cin>>c;
	
	if(c>0)
	{
	d=(c/acumb)*100;
	d=d-100;
	}
	else
	{
		cout<<"Precio pagado erroneo."<<endl;
	}
	cout<<"El descuento aplicado en la compra fue de: "<<d;
	
	return 0;
	
}

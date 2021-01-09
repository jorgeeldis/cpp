#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int limite = 1000,b,e,g;

int retiro(int limite)
{
	limite=limite-b;
	return limite;
}

int recarga(int limite)
{
	limite=limite+e;
	return limite;
}

int transferir(int limite)
{
	limite=limite-g;
	return limite;
}

int main()
{
	int d,f,z;
	double a,c,x,y;
	
	z = 0;
	while(z!=5)
	{
	cout<<"Introduzca una de las siguientes opciones: \n";
	cout<<"1 para Retiro de dinero. \n";
	cout<<"2 para Consulta de saldo. \n";
	cout<<"3 para Recarga de tarjeta. \n";
	cout<<"4 para Transferencia bancaria. \n";
	cout<<"5 para salir. \n";
	cout<<"";
	cin>>z;
	if(limite>0)
	{
	if(z==1)
	{
		cout<<"Favor introducir monto a retirar: ";
		cin>>b;
		if(b<=limite && b>0)
		{
			limite = retiro(limite);
			if(limite>0)
			{
			cout<<"Su nuevo credito es de: "<<limite<<endl;
			}
			else
			{
			cout<<"No tiene saldo suficiente."<<endl;
			}
		}
		else
		{
		cout<<"Ha introducido un monto no valido."<<endl;
		}
	}
	
	if(z==2)
	{
		cout<<"Su credito actual es de: "<<limite<<endl;
	}
	if(z==3)
	{
		cout<<"Para recargar favor introducir numero de tarjeta: ";
		cin>>d;
		cout<<"Introduzca el monto que quiere recargar: ";
		cin>>e;
		if(e>0)
		{
			if(limite>0)
			{
			limite = recarga(limite);
			cout<<"El nuevo monto de la tarjeta es de: "<<limite<<endl;
			}
			else
			{
			cout<<"No tiene saldo suficiente. "<<endl;
			}
		}
		else
		{
		cout<<"Ha introducido un monto no valido."<<endl;
		}
	}
	if(z==4)
	{
		cout<<"Porfavor introduzca el # de cuenta a transferir: ";
		cin>>f;
		cout<<"Introduzca cuanto quiere transferir: ";
		cin>>g;
		if(g<=limite && g>0)
		{
			if(limite>0)
			{
			limite = transferir(limite);
			cout<<"Su credito actual es de: "<<limite<<endl;
			}
			else
			{
			cout<<"No tiene saldo suficiente. "<<endl;
			}
		}
		else
		{
		cout<<"Ha introducido un monto no valido."<<endl;
		}
	}
	if(z==5)
	{
		cout<<"Usted ha salido del menu. ";
	}
	}
	system("pause");
	system("cls");
	}
	return 0;
}

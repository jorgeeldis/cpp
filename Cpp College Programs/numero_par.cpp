#include <iostream>

using namespace std;

int main()
{
	
	int a, b, c, i, num[50];
	
	cout<<"Porfavor introduzca un numero par: ";
	cin>>a;
 
	for (i = 0; i < a; i++)
	{
	cout<<"Introduzca el numero: ";
	cin>>num[i];
	}
	
	b=num[0]+a;
	cout<<"La suma de el primer elemento con el numero par es: "<<b<<endl;
	
	for (i=0; i<a; i++)
	{
	c=num[2]+(a-2);
	cout<<"La suma de el tercer elemento con el numero par - 2 es: "<<c<<endl;
	}
}

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Porfavor introduzca un numero: ";
	cin>>a;
	
	cout<<"Porfavor introduzca un numero: ";
	cin>>b;
	
	if((a % b == 0) && (b!=0))
	{
		cout<<"El numero "<<a;
		cout<<" es divisible por "<<b;
	}
	else
	{
		cout<<"El numero "<<a;
		cout<<" no es divisible por "<<b;
	}
	
	return 0;
	
}

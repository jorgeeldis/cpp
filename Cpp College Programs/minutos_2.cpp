#include <iostream>

using namespace std;

int main ()
{
	
int minutos;
double horas;
float x, f, b, n;

cout<<"Ingrese minutos: ";
cin>>minutos;

horas=minutos/60;
b=minutos%60;
f=0.05*b;
n=0.05*minutos;

if(horas>=1 && horas<=2)
{
	x=3.20*horas;
	cout<<x<<endl;
	cout<<f;
}
if(horas>=3 && horas<=4)
{
	x=3.30*horas;
	cout<<x<<endl;
	cout<<f;
}
if(horas>=4 && horas<=8)
{
	x=3.50*horas;
	cout<<x<<endl;
	cout<<f;
}
if(horas>=9 && horas<=25)
{
	x=3.750*horas;
	cout<<x<<endl;
	cout<<f;
}
if(horas<1)
{
	cout<<n;
}

return 0;

}

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int x;
	
	cout<<"Porfavor introduzca un numero real. ";
	cin>>x;
	
	if(x==0)
	{
		cout<<"0";
	}
	
	else if(x>0)
	{
		cout<<"1";
	}
	
	else
	{
		cout<<"-1";
	}
	
	return 0;
	
}

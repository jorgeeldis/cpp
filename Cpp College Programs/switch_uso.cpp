// Uso del switch //


#include <iostream>

using namespace std;

int main(){
	
	int a;
	
	cout<<"Ingrese un numero del 1 al 3: ";
	cin>>a;
	
	switch(a){
		
		case 1: cout<<"usted ha introducido el numero 1!";
		break;
		case 2: cout<<"usted ha introducido el numero 2!";
		break;
		case 3: cout<<"usted ha introducido el numero 3!";
		break;
		default: cout<<"No esta siguiendo indicaciones!!!";
		
	}
	
	return 0;
	
}

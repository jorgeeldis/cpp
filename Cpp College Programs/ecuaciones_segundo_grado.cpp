#include <iostream>
#include <math.h>

using namespace std;

int main(){

float a, b, c ;
float J;
cout<<"\nEcuaciones de segundo grado\n";
cout<<"  2\n";
cout<<"ax + bx+ c = 0: \n";
cout<<"introduce valor de a: ";
cin>>a;
cout<<"introduce valo de b: ";
cin>>b;
cout<<"introduce valor de c: ";
cin>>c;

J=b*b-(4*a*c);
if (J==0){
cout<<"la formula es"<<-b/(2*a);
}
else if (J>0){

cout<<"la 1ra es"<<-b+sqrt(J)/(2*a);
cout<<"la 2da es"<<-b-sqrt(J)/(2*a);
}
else { //J<0
cout<<"la 1ra es"<<-b/(2*a),(sqrt(-J)/(2*a));
cout<<"la 2da es"<<-b/(2*a),(sqrt(-J)/(2*a));	

}

return 0;
}


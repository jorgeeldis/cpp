#include<iostream>
#include<cmath>
using namespace std;
main(){
 float r,pi=3.14,p,a;//ponemos el valor de pi
    cout<<"introduce el radio del circulo: ";cin>>r;
    a = pow(r,2)*pi;
    p = 2*pi*r;
    cout<<"el area del circulo es: "<<a<<endl;
    cout<<"el perimetro del circulo es: "<<p<<endl;
    return 0;
}

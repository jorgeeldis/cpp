#include <iostream>

using namespace std;
 
int main()
{
 
int num[50],mayor,i,pos,menor,sum=0,n=0;
double promedio, porc;
 
cout<<"Porfavor introduzca notas: "<<endl;
 
for (i = 0; i < 50; i++)
{
cin>>num[i];
sum = sum + num[i];
promedio = sum/50;
}

mayor = num[0];
menor = num[0];
 
for (i = 0; i < 50; i++)
 {
  if (mayor < num[i])
   {
     mayor = num[i];
   }
  }
  
  for (i = 0; i < 50; i++)
 {
  if (menor > num[i])
   {
     menor = num[i];
     pos = i;
   }
  }
  
  for (i = 0; i < 50; i++)
  {
  	if(num[i] >= 91)
  	n = n + 1;
  	porc = (n*100)/50;
  }
  
cout<<"El numero mayor es: "<<mayor<<endl;
cout<<"El numero menor es: "<<menor<<endl;
cout<<"El promedio es de: "<<promedio<<endl;
cout<<"El porcentaje de notas arriba de 91 es de: "<<porc<<endl;
cout<<"La posicion del numero menor es de: "<<pos<<endl;
 
}

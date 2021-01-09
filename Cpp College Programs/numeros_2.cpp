#include <iostream>

using namespace std;
 
int main()
{
 
int num[100],mayor,i,sum=0,pares=0,impares=0,neutros=0;
double porc;
 
cout<<"Porfavor introduzca numeros: "<<endl;
 
for (i = 0; i < 100; i++)
{
cin>>num[i];
}

mayor = num[0];
 
for (i = 0; i < 100; i++)
 {
  if (mayor < num[i])
   {
     mayor = num[i];
   }
  }
  
  for (i = 0; i < 100; i++)
 {
 	if(num[i] != 0)
 	{
  if (num[i] % 2 == 0)
   {
    pares++;
   }
   else 
   {
   	impares++;
   }
	}
	else
	{
	neutros++;
	sum = sum + 1;
	}
  }
  
  porc = (impares*100)/100;
  
cout<<"El numero mayor es: "<<mayor<<endl;
cout<<"La suma de numeros pares es: "<<pares<<endl;
cout<<"El porcentaje de numeros impares es: "<<porc<<endl;
cout<<"La cantidad de numeros neutros es de: "<<sum<<endl;
 
}

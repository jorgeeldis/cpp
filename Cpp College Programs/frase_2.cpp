#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	
	int sum=0, sum_1=0, x;
	char frase[50];
	
	cout<<"Introduzca una frase: "<<endl;
	gets(frase);
	
	for(x=0; x<50; x++)
	{
		if(frase[x]>=65 && frase[x]<=90)
		{
			sum++;
		}
	}
	
	for(x=0; x<50; x++)
	{
		if(frase[x]>=97 && frase[x]<=122)
		{
			sum_1++;
		}
	}
	
	cout<<"En la frase hay "<<sum<<" mayusculas."<<endl;
	cout<<"En la frase hay "<<sum_1<<" minusculas.";
	
	return 0;
}

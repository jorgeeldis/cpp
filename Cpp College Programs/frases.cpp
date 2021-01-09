#include <iostream>

using namespace std;
	
	int main(int argc, char *argv[])
{

    int sum=0,x;
    char frase[50];
   
    cout<<"Introduzca una frase: "<<endl;
    cin>>frase;
   
    for(x = 0;x < 50;x++)
    {
      switch (frase[x])
      {
           case 'a':
                sum++;
                break;
           case 'e':
                sum++;
                break;
           case 'i':
                sum++;
                break;
           case 'o':
                sum++;
                break;
           case 'u':
                sum++;
                break;            
           default:
                break;
      }
     
    }
   
    cout<<"En la oracion hay "<<sum<<" vocales.";
    
    return 0;
	
}


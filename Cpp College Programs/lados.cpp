#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void mostrar_cudrado(int lados){
	
const int row = lados;
const int col = lados;

string Table [row][col];


	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
					
			if((i - j) == 0){
				
				Table[i][j] = "-";
			}
			else if (i < j) {
				Table[i][j] = "+";
			}
			else{
				Table[i][j] = "*";	
			}

		}
	}
	
	// output
	
	for(int i=0; i < row; i++)
	{
		for(int j=0; j < col; j++)
		{
			cout<<Table[i][j]<<" ";
		}
		cout<<"\n";
	}

	
}

int main() {
	
	int lados;

	cout<<"Introduzca el lado del cuadrado (max 20) : ";
	cin>>lados;
	
	mostrar_cudrado(lados);
	return 0;
}



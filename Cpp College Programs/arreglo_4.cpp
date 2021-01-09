#include<stdio.h>
#include<conio.h>
#include<iostream>

int main () {
    int arreglo [24];
    int n;
    int menor,mayor, prom=0;
    
    
    printf ("ingrese la cantidad de elementos del arreglo.\n");
	scanf ("%i",&n);
	
    for (int i=1; i<=n; i++){
    	
	    printf ("elemento No. %i \n", i);
	    
		scanf ("%i", &arreglo[i]);
		
		prom =  prom  +  arreglo[i];

/*		
		if(arreglo[i] < menor){
			menor = arreglo[i];
		}
		
		if(arreglo[i] > mayor){
			mayor = arreglo[i];
		}
		*/
		//printf("%i", arreglo[i]);

		//printf("%i", mayor);
	
	
	if (i == 1)  {
	   menor=  arreglo[i] ;
	   printf("Entro \n");
	   //mayor = arreglo[i] ;    
	   }
	   
	if (mayor <  menor){

	   menor =  arreglo[i];  
	}

		
		//printf("Arreglo %i \n", arreglo[i]);
		//printf("Mi menor %i \n", mimenor);
	
	}
	   
    printf ("\n\n  MAYOR  %i \n", mayor);
    printf ("\n\n  Menor  %i \n", menor);
    printf ("\n\n  PROMEDIO  %i \n", prom/n);
    getch();
    return 0;
    }


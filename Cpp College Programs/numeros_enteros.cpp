#include <iostream>
 
{int sumar_valores(int a, int b)
 
int resultado = a + b;
 
return (resultado);
 
}
 
float promedio (int a, int b)
 
{
 
return ( (a+b)/2.0 );
 
}
 
main()
 
{
 
int x,y;
 
cout << "El programa le pedirá que ingrese dos números enteros. ";
 
cout << "\n\nIngrese el primer número: ";
 
cin >> x;
 
cout << "\nIngrese el segundo número: ";
 
cin >> y;
 
cout << "\nEl promedio es: " << promedio(x,y);  cout << "\n\nLa suma de los números es : " << sumar_valores(x,y);
 
}

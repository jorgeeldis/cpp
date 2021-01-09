//Day 1 of 100 of code!!!
//by Jorge Eldis - Founder of Stoa Community
//Including libraries
#include <iostream>
#include <math.h>       
#include <string>
 
using namespace std;

//Naming and creating my functions
int addition (int x, int y)
{
   int z;
   z=x+y;
   return z;
}

int quadratic_function (int a, int b, int c)
{
    int r;
    r = (-b+(sqrt((pow(b, 2))-4*a*c)))/(2*a);
    return r;
}

void convert (int sec)
{
    int day = sec / (24 * 3600); 
  
    sec = sec % (24 * 3600); 
    int hour = sec / 3600; 
  
    sec %= 3600; 
    int minutes = sec / 60 ; 
  
    sec %= 60; 
    int seconds = sec; 
      
    cout << day << " " << "days " << hour  
         << " " << "hours " << minutes << " " 
         << "minutes " << seconds << " " 
         << "seconds "  << endl; 
    }

//Calling my functions!!
int main ()
{
    int z;
    z = addition (4, 2);
    cout << "The result of the sum is:  " << z;

    int r;
    r = quadratic_function(2, 2, 2);
    cout << "\nThe result of the quadratic function is: " << r;

    int sec = 86400;
    cout << "\nThe result of seconds converted to days, hours, minutes, and seconds: ";
    convert(sec);
}


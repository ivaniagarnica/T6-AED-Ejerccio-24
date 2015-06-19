// Ivania Garnica
// Ejecicio n° 24.
// 26-05-2015
#include <iostream>
using namespace std;

int n;
int mayor;
int main ()
{
   cout << "\t\tIngrese 10 numeros enteros\n\n";
   for (int i=1 ; i<=10 ; i++)
   {
     cout << "Ingrese numero";
     cin >> n;
     if(n>mayor)
     mayor=n;

            
   }
   
cout<<"Mayor\n\n";
cout<< mayor;    
}

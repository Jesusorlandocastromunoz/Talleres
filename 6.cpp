/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero,fibo1,fibo2,i;
   do
   {
         cout << "Introduce numero mayor que 1: ";
         cin >> numero;
   }while(numero<=1);
   cout << endl;
    cout << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
   fibo1=1;
   fibo2=1;
   cout << fibo1 << " ";
   for(i=2;i<=numero;i++)
   {
       cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
   }
   cout << endl << endl;
    system("pause");
}
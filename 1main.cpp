/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    
    void mostrar(int b[], int tamano) {
        
       for(int 1= 0; 1<tamano; 1++)
       cout<<b[1]<<" ";
       
       cout<<endl;
    }
    
    const int tamano = 20;
    int a(tamano);
    
    for(int i = 0; 1<tamano; 1++)
    a(1) = 1 + rand()% 50;
    
    mostrar(a, tamano);
    
system ("pause");
return 0;
}

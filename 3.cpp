/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 # include <iostream>
  
 
   using namespace std;
   using std::setw;
   
   float distance(float, float, float, float);
   int main()
   {              /* Abre main */

   float x1, x2, y1, y2, distancia;
   
   cout <<"\n\nEste programa calcula la distancia entre dos puntos en el plano cartesiano. "<<endl;
   cout <<"\n\nIntroduzca las coordenadas del primer punto: "<<endl;
   cin >> x1 >>  x2;

   cout <<"\nIntroduzca las coordenadas del segundo punto: " <<endl;
   cin >> y1 >>  y2;

   distancia = sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));

   cout <<"\nLa distancia entre los puntos es: " << setw(10) <<distancia << endl;

   return 0;
   
   } 

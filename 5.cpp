/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
 

int main(void) {
	float maximo[5], max=0;
	int x=0;
	printf("Ingrese 5 valores para determinar el numero maximo\n");
 
	for (int i = 1; i <= 5; i++){
 
		printf("valor %d\n",i);
		scanf("%f",&maximo[i]);
 
		if(maximo[i] > max){
			max = maximo[i];
			x = i;
		}
 
	}
 
	printf("El numero maximo es: %.2f\n y fue el numero %d en ser ingresado",max,x);
 
	system("PAUSE");
	return 0;
}
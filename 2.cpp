/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <conio.h>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 0 ; numero <= 100 ; numero += 2 )
    {
        printf( "%d ", numero );
    }

    getch(); /* Pausa */

    return 0;
}
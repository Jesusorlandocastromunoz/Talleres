/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include<stdio.h>
#include<conio.h>
#include<iostream>
main()
{
	system("COLOR DB");
	float pesos,dolares,euros;
	char opc;
	printf("\t\t\t!!!PROGRAMA DE CAMBIO!!!\n\n");
	printf(" [1]CAMBIO DE PESOS A DOLARES\n [2]CAMBIO DE DOLARES A PESOS\n [3]CAMBIO DE PESOS A EUROS\n [4]CAMBIO DE EUROS A PESOS\n [5]CAMBIO DE DOLARES A EUROS\n [6]CAMBIOS DE EUROS A DOLARES\n");
	printf("\n ELIJA UNA OPCION\n");
	scanf("%d",&opc);
	switch (opc){
		case 1:{
			printf("CUANTOS PESOS NECESITA CAMBIAR A DOLARES\n");
			scanf("%f",&pesos);
			dolares=pesos/18;
			printf("LOS DOLARES SON$ %f\n",dolares);
			break;
		}
		case 2:{
			printf("CUANTOS DOLARES NECESITA CAMBIAR A PESOS\n");
			scanf("%f",&dolares);
			pesos=dolares*18;
			printf("LOS PESOS SON$ %f\n",pesos);
			break;
		}
		case 3:{
			printf("CUANTOS PESOS NECESITA CAMBIAR A EUROS\n");
			scanf("%f",&pesos);
			euros=pesos/20;
			printf("LOS EUROS SON$ %f\n",euros);
			break;
		}
		case 4:{
			printf("CUANTOS EUROS NECESITA CAMBIAR A PESOS\n");
			scanf("%f",&euros);
			pesos=euros*20;
			printf("LOS PESOS SON$ %f\n",pesos);
			break;
		}
		case 5:{
			printf("CUANTOS DOLARES NECESITA CAMBIAR A EUROS\n");
			scanf("%f",&dolares);
			euros=dolares/1.09;
			printf("LOS EUROS SON$ %f\n",euros);
			break;
		}
		case 6:{
			printf("CUANTOS EUROS NECESITA CAMBIAR A DOLARES\n");
			scanf("%f",&euros);
			dolares=euros*1.09;
			printf("LOS DOLARES SON$ %f\n",dolares);
			break;
		}
	}
	
	getch();
	
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "tampilan.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	void loading();
		int i;
		system("cls");
		printf("\n");
		printf("\n\n\n\n\t\t\t\t\t\t\t\t=======innallaha ma'a shobirin=======");
		printf("\n\t\t\t\t\t\t\t\t\t\tLOADING\n");
			for(i=1;i<169;i++)
			{
				printf("");
				printf("%c", 254);
				Sleep(30);
			}	
		system("cls");
	
	tampilan_awal();

	return 0;
}

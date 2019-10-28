#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "logika.h"

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int action;
	int k;
	logika obj;
	logika obj1;
	logika obj2;
	printf("Vvedite dannie");
	obj1.read(std::cin, obj1);
	obj2.read(std::cin, obj2);
	printf("Menu:\n");
	printf("1) and\n");
	printf("2) or\n");
	printf("3) xor\n");
	printf("4) not\n");
	printf("5) Sdvig vlevo na k bit‚\n");
	printf("6) Sdvig vpravo na k bit‚\n");
	printf("7) count1\n");
	printf("8) sravnenie\n");
	printf("9) proverka vkl\n");
	printf("10)Vihod\n");

	do
	{
		printf("Viberete deistvie: ");
		scanf_s("%d", &action);

		switch (action)
		{
		case 1:
		{
			 obj._and(obj1, obj2).write(std::cout, obj); 
			break;
		}
		case 2:
		{
			obj._or(obj1, obj2).write(std::cout, obj);
			
			break;
		}
		case 3:
		{
			obj._xor(obj1, obj2).write(std::cout, obj);
			
			break;
		}
		case 4:
		{
			obj._not().write(std::cout, obj);

			break;
		}
		case 5:
		{
			printf("Vvedite: k ");
			scanf_s("%d", &k);
			obj1._shiftLeft(k).write(std::cout, obj1);

			
			break;
		}
		case 6:
		{
			printf("Vvedite: k ");
			scanf_s("%d", &k);
			obj1._shiftRight(k).write(std::cout, obj1);
			
			break;
		}
		case 7:
		{
			std::cout <<"Vsego ed v pervoi stroke: "<< (obj1._count1()) << "\n";

			break;
		}
		
		case 8:
		{
			obj._sravnenie(obj1, obj2);

			break;
		}
		case 9:
		{
			if (obj._vkluch(obj1, obj2))
				std::cout << "Vkluch" << std::endl;
			else 
				std::cout << "Ne vkluch" << std::endl;
			break;
		}

		default:
		{
			printf("Oshibka. Net punkte menu\n");
			break;
		}

		return 0;

		}
	} while (action != 10);
	return(0);
}

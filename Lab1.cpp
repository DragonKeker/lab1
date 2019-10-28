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
	printf("Введите данные");
	obj1.read(std::cin, obj1);
	obj2.read(std::cin, obj2);
	printf("Меню:\n");
	printf("1) and\n");
	printf("2) or\n");
	printf("3) xor\n");
	printf("4) not\n");
	printf("5) Сдвиг влево на k бит‚\n");
	printf("6) Сдвиг вправо на k бит‚\n");
	printf("7) count1\n");
	printf("8) sravnenie\n");
	printf("9) proverka vkl\n");
	printf("10)Выход\n");

	do
	{
		printf("Выберете действие: ");
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
			printf("Введите: k ");
			scanf_s("%d", &k);
			obj1._shiftLeft(k).write(std::cout, obj1);

			
			break;
		}
		case 6:
		{
			printf("Введите: k ");
			scanf_s("%d", &k);
			obj1._shiftRight(k).write(std::cout, obj1);
			
			break;
		}
		case 7:
		{
			std::cout <<"Всего единиц в первой строке: "<< (obj1._count1()) << "\n";

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
				std::cout << "Включает" << std::endl;
			else 
				std::cout << "Не включает" << std::endl;
			break;
		}

		default:
		{
			printf("Ошибка. Такого пункта меню не существует\n");
			break;
		}

		return 0;

		}
	} while (action != 10);
	return(0);
}

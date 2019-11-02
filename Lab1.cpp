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
	printf("Vvedite dannie\n");
	obj1.read(std::cin, obj1);
	obj2.read(std::cin, obj2);
	obj1._and( obj2).write(std::cout); 
	obj1._or( obj2).write(std::cout);
	obj1._xor( obj2).write(std::cout);
	obj1._not().write(std::cout);
	printf("Vvedite : k ");
			scanf_s("%d", &k);
			obj1._shiftLeft(k).write(std::cout);
	printf("Vvedite : k ");
			scanf_s("%d", &k);
			obj1._shiftRight(k).write(std::cout);
	std::cout <<"Edenits v 1 str: "<< (obj1._count1()) << "\n";
	obj1._sravnenie( obj2);
	if (obj1._vkluch( obj2))
				std::cout << "Vkluch" << std::endl;
			else 
				std::cout << "Ne Vkluch" << std::endl;
			
}
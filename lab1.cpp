#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "logika.h"


int read1(uint64_t *a, uint64_t *b)
{
  printf("Введите элементы: ");
  std::cin >> *a>>*b;
  if (a < 0 && b < 0)
    {
      printf("Ошибка. Введены недопустимые значения\n");
      return 0 ;
    }
  else
    return 1 ;
}

int read1(uint64_t* a)
{
  printf("Введите элемент: ");
  std::cin >> *a;
  if (a < 0)
    {
      printf("Ошибка. Введены недопустимые значения\n");
      return 0;
    }
  else
    return 1;
}

 int main() {
  setlocale(LC_ALL, "RUSSIAN");
  int action;
  int k;
  logika obj;
  printf("Меню:\n");
  printf("1) and\n");
  printf("2) or\n");
  printf("3) xor\n");
  printf("4) not\n");
  printf("5) сдвиг влево на k бит\n");
  printf("6) сдвиг вправо на k бит\n");
  printf("7) count1\n");
  printf("8) sravnenie\n");
  printf("9) proverka vkl\n");
  printf("10) Выход\n");

  do
    {
      printf("Выберите действие: ");
      scanf("%d", &action);

      switch (action)
	{
	case 1:
	  {

	    if (read1(&(obj.field1), &(obj.field2)))
	      std::cout<<(obj._and(obj.field1, obj.field2))<<"\n";
	    break;
	  }
	case 2:
	  {
	    if (read1(&obj.field1, &obj.field2))
	      std::cout<<(obj._or(obj.field1, obj.field2)) << "\n";
	    break;
	  }
	case 3:
	  {
	    if (read1(&obj.field1, &obj.field2))
	      std::cout<<(obj._xor(obj.field1, obj.field2)) << "\n";
	    break;
	  }
	case 4:
	  {
	    if (read1(&obj.field1))
	      std::cout<<(obj._not(obj.field1)) << "\n";
	    break;
	  }
	case 5:
	  {
	    if (read1(&obj.field1))
	      {
		printf("Введите : k ");
		scanf("%d", &k);
		std::cout<<(obj._shiftLeft(obj.field1,k)) << "\n";

	      }
	    break;
	  }
	case 6:
	  {
	    if (read1(&obj.field1))
	      {
		printf("Введите : k ");
		scanf("%d", &k);
		std::cout << (obj._shiftRight(obj.field1, k))<<"\n";
	      }
	    break;
	  }
	case 7:
	  {
	    if (read1(&obj.field1))
	      std::cout<<obj._count1(obj.field1)<<"\n";
	    break;
	  }
	case 8:
	  {
	    if (read1(&obj.field1, &obj.field2))
	      obj._sravnenie(obj.field1, obj.field2);
	    std::cout << std::endl;
	    break;
	  }
	case 9:
	  {

	    break;
	  }
	case 10:
	  {

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
}

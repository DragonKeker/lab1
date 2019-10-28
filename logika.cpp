#include "logika.h"



    void logika::read(std::istream& is, logika& obj) {
		is >> obj.field1 >> obj.field2;
    }
    void logika::write(std::ostream& os, logika& obj)   {
		os << obj.field1 << " " << obj.field2<<"\n";
    }
	logika logika::_and(logika& obj1, logika& obj2)
	{
		logika result;
		result.field1 = obj1.field1 & obj2.field1;
		result.field2 = obj1.field2 & obj2.field2;
		this->field1 = result.field1;
		this->field2 = result.field2;
		return(result);
	};
	logika logika::_or(logika& obj1, logika& obj2)
	{
		logika result;
		result.field1 = obj1.field1 | obj2.field1;
		result.field2 = obj1.field2 | obj2.field2;
		this->field1 = result.field1;
		this->field2 = result.field2;
		return(result);
	};
	logika logika::_xor(logika& obj1, logika& obj2)
	{
		logika result;
		result.field1 = obj1.field1 ^ obj2.field1;
		result.field2 = obj1.field2 ^ obj2.field2;
		this->field1 = result.field1;
		this->field2 = result.field2;
		return(result);
	};
	logika logika::_not()
	{
		logika result;
		result.field1 = ~ field1;
		result.field2 = ~ field2;
		this->field1 = result.field1;
		this->field2 = result.field2;
		return(result);
	};
	logika logika::_shiftLeft( int k)
	{
		logika result;

		unsigned long long pow63 = 1;
		for (int i = 0; i < 63; i++) {
			pow63 *= 2;
		}

		for (int i = 0; i < k; i++) {
			field1 = field1 << 1;
			if (field2 >= pow63) {
				field1 += 1;
			}
			field2 = field2 << 1;

		}
		result.field1 = field1;
		result.field2 = field2;
		this->field1 = result.field1;
		this->field2 = result.field2;
		return (result);
	};
	logika logika::_shiftRight( int k)
	{
		logika result;

		unsigned long long pow63 = 1;
		for (int i = 0; i < 63; i++) {
			pow63 *= 2;
		}
		for (int i = 0; i < k; i++) {
			field2 = field2 >> 1;
			if (field1 % 2 == 1) {
				field2 += pow63;
			}
			field1 = field1 >> 1;
		}

		result.field1 = field1;
		result.field2 = field2;
		this->field1 = result.field1;
		this->field2 = result.field2;
		return (result);
	};
	int logika::_count1()
	{
		uint64_t a = field1;
		uint64_t b = field2;
		int t = 0;
		int sum = 0;
		while (a != 0) {
			t += 1; a &= a - 1;
		}
		sum = sum + t;

		t = 0;
		while (b != 0) {
			t += 1; b &= b - 1;
		}
		sum = sum + t;

		return(sum);
	};
	
	void logika::_sravnenie(logika& obj1, logika& obj2)
	{
		
		if (obj1._count1() > obj2._count1())
		{
			std::cout << " оличество единиц в первой строке больше" << std::endl;
		}
		else if (obj1._count1() < obj2._count1())
		{
			std::cout << " оличество единиц во второй строке больше" << std::endl;
		}
		else
		{
			std::cout << " оличество единиц в строках равно"<< std::endl;
		}
	};

	bool logika::_vkluch(logika& obj1, logika& obj2) {
		logika result;
		logika obj;
		if ((obj2.field1 == obj._and(obj1, obj2).field1) && (obj2.field2 == obj._and(obj1, obj2).field2))
			return (1);
		else
			return 0;

	};

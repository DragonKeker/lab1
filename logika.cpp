#include "logika.h"



    void logika::read(std::istream& is, logika& obj) {
		is >> obj.field1 >> obj.field2;
    }
    void logika::write(std::ostream& os)  {
		os << field1 << " " << field2<<"\n";
    }
	logika logika::_and(const logika& obj2)const
	{
		logika result;
		result.field1 = field1 & obj2.field1;
		result.field2 = field2 & obj2.field2;
		return(result);
	};
	logika logika::_or(const logika& obj2)const
	{
		logika result;
		result.field1 = field1 | obj2.field1;
		result.field2 = field2 | obj2.field2;
		return(result);
	};
	logika logika::_xor(const logika& obj2)const
	{
		logika result;
		result.field1 = field1 ^ obj2.field1;
		result.field2 = field2 ^ obj2.field2;
		return(result);
	};
	logika logika::_not()const
	{
		logika result;
		result.field1 = ~field1;
		result.field2 = ~field2;
		return(result);
	};
	logika logika::_shiftLeft(const int k)const
	{
		logika result;
		uint64_t a = field1, b = field2;
		unsigned long long pow63 = 1;
		for (int i = 0; i < 63; i++) {
			pow63 *= 2;
		}

		for (int i = 0; i < k; i++) {
			a = a << 1;
			if (b >= pow63) {
				a += 1;
			}
			b = b << 1;

		}
		result.field1 = a;
		result.field2 = b;
		return (result);
	};
	logika logika::_shiftRight(const int k)const
	{
		logika result;
		uint64_t a=field1, b=field2;

		unsigned long long pow63 = 1;
		for (int i = 0; i < 63; i++) {
			pow63 *= 2;
		}
		for (int i = 0; i < k; i++) {
			b = b >> 1;
			if (a % 2 == 1) {
				b += pow63;
			}
			a = a >> 1;
		}

		result.field1 = a;
		result.field2 = b;
		return (result);
	};
	int logika::_count1()const
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
	
	void logika::_sravnenie(const logika& obj2)const
	{
		
		if (this->_count1() > obj2._count1())
		{
			std::cout << "Kol-vo ed v 1 >" << std::endl;
		}
		else if (this->_count1() < obj2._count1())
		{
			std::cout << "Kol-vo ed vo 2 >" << std::endl;
		}
		else
		{
			std::cout << "Kol-vo ed ravno"<< std::endl;
		}
	}; //делаем лабы

	bool logika::_vkluch(const logika& obj2)const {
		logika result;
		logika obj;
		if ((obj2.field1 == this->_and(obj2).field1) && (obj2.field2 == this->_and( obj2).field2))
			return (1);
		else
			return 0;
	};
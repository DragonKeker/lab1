#pragma once
#ifndef D_LOGIKA_H_
#define D_LOGIKA_H_ 1
#include <iostream>

struct logika {

	
	logika _and (const logika& obj2) const;
	logika _or(const logika& obj2)const;
	logika _xor(const logika& obj2)const;
	logika _not()const;
	logika _shiftLeft(const int k)const;
	logika _shiftRight(const int k)const;
	int _count1()const;
	void _sravnenie(const logika& obj2)const;
	bool _vkluch(const logika& obj2)const;
	
public:
	uint64_t field1;
	uint64_t field2;
	static void read(std::istream&, logika&);
	 void  write(std::ostream& );
};

#endif // D_LOGIKA_H_#pragma once
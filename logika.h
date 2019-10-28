#ifndef D_LOGIKA_H_
#define D_LOGIKA_H_ 1
#include <iostream>

struct logika {

	
	logika _and(logika &obj1, logika& obj2);
	logika _or(logika& obj1, logika& obj2);
	logika _xor(logika& obj1, logika& obj2);
	logika _not();
	logika _shiftLeft( int k);
	logika _shiftRight( int k);
	int _count1();
	void _sravnenie(logika& obj1, logika& obj2);
	bool _vkluch(logika& obj1, logika& obj2);
	
public:
	uint64_t field1;
	uint64_t field2;
	static void read(std::istream&, logika&);
	static void write(std::ostream&, logika&);
};

#endif // D_LOGIKA_H_#pragma once

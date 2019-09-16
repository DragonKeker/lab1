
#ifndef D_LOGIKA_H_
#define D_LOGIKA_H_ 1
#include <iostream>

struct logika {

  uint64_t _and(uint64_t field1, uint64_t field2)
  {
    return(field1 & field2);
  };
  uint64_t _or(uint64_t field1, uint64_t field2)
  {
    return(field1 | field2);
  };
  uint64_t _xor(uint64_t field1, uint64_t field2)
  {
    return(field1 ^ field2);
  };
  uint64_t _not(uint64_t field1)
  {
    return(~field1);
  };
  uint64_t _shiftLeft(uint64_t field1, int k)
  {
    return(field1 << k);
  };
  uint64_t _shiftRight(uint64_t field1, int k)
  {
    return(field1 >> k);
  };
  uint64_t _count1(uint64_t field1)
  {
    int t=0;
    while (field1 != 0) {
      t += 1; field1 &= field1 - 1;
    }
    return(t);
  };
  void _sravnenie (uint64_t field1, uint64_t field2)
  {
    if (_count1( field1)>_count1( field2))
      {std::cout<<"Количество единиц в первом числе больше";}
    if (_count1( field1)<_count1( field2))
	{std::cout<<"Количество единиц во втором числе больше";}
    else  {std::cout<<"Количество единиц в числах равно";}
  };

  //void read(std::istream& is);
  //void write(std::ostream& os) const;
 
public:
  uint64_t field1;
  uint64_t field2;
};

#endif // D_LOGIKA_H_

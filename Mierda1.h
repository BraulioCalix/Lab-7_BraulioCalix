#ifndef PODER_H
#define PODER_H
#include <string>
using std::string;
class Poder{
	public:
		virtual double getArea()=0;
		virtual double getPerimetro();
		virtual string toString()=0;
};
#endif

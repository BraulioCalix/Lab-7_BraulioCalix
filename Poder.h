#ifndef PODER_H
#define PODER_H
#include <string>
using std::string;
class Poder{
	private: 
		string nombre;
		string nivel;
	public:
	Poder();
		Poder (string ,string);
		virtual string toString();
};
#endif

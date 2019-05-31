#ifndef PODER_H
#define PODER_H
#include <string>
using std::string;
class Poder{
	private: 
		string nombre;
		int nivel;
	public:
		string getNombre();
		int getNivel();
		virtual string toString();
};
#endif

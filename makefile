Main.out: Main.o Agua.o Aire.o Fuego.o Tierra.o Normales.o Invocacion.o Curativo.o Defencivo.o Poder.o Persona.o 
	g++ Main.o Agua.o Aire.o Fuego.o Tierra.o Normales.o Invocacion.o Curativo.o Defencivo.o Poder.o Persona.o -o Main.out
	./Main.out

Main.o: Main.cpp Persona.h Poder.h Normales.h Invocacion.h Aire.h Fuego.h Tierra.h Agua.h Defencivo.h Curativo.h Ofencivo.h
	g++ Main.cpp
Poder.o: Poder.h Poder.cpp Invocacion.h Invocacion.cpp Ofencivo.h Ofencivo.cpp Defencivo.h Defencivo.cpp Curativo.h Curativo.cpp
	g++ Poder.cpp
Persona.o: Persona.h Persona.cpp Aire.h Aire.cpp Fuego.h Fuego.cpp Tierra.h Tierra.cpp Agua.h Agua.cpp Normales.h Normales.cpp
	g++ Persona.cpp
Aire.o: Aire.h Aire.cpp
	g++ Aire.cpp
Agua.o: Agua.h Agua.cpp	
	g++ Agua.cpp
Fuego.o: Fuego.h Fuego.cpp
	g++ Fuego.cpp
Tierra.o: Tierra.h Tierra.cpp
	g++ Tierra.cpp
Normales.o :Normales.h Normales.cpp
	g++ Normales.cpp
Invocacion.o: Invocacion.h Invocacion.cpp
	g++ Invocacion.cpp
Curativo.o: Curativo.h Curativo.cpp
	g++ Curativo.cpp
Defencivo.o: Defencivo.h Defencivo.cpp
	g++ Defencivo.cpp
Ofencivo.o: Ofencivo.h Ofencivo.h
	g++ Ofencivo.cpp	

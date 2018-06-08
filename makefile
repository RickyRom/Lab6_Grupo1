main:	main.cpp Dinosaurios.o Carnivoros.o Herviboros.o Triceratops.o Spinosaurus.o TyrannosaurusRex.o Aereos.o Marinos.o Omnivoros.o Oviraptor.o
main.o:	main.cpp Dinosaurios.h Carnivoros.h Herviboros.h Triceratops.h Spinosaurus.h TyrannosaurusRex.h Aereos.h Marinos.h Omnivoros.h Oviraptor.h
	g++ -c main.cpp
Dinosaurios.o:	Dinosaurios.h Dinosaurios.cpp
	g++ -c Dinosaurios.cpp
Carnivoros.o:	Carnivoros.h Carnivoros.cpp
	g++ -c Carnivoros.cpp
Herbivoros.o:	Herbivoros.h Herbivoros.cpp
	g++ -c Herbivoros.cpp
Triceratops.o:	Triceratops.h Triceratops.cpp
	g++ -c Triceratops.cpp
Spinosaurus.o:	Spinosaurus.h Spinosaurus.cpp
	g++ -c Spinosaurus.cpp
TyrannosaurusRex.o:	TyrannosaurusRex.h TyrannosaurusRex.cpp
	g++ -c TyrannosaurusRex.cpp
Aereos.o:	Aereos.h Aereos.cpp
	g++ -c Aereos.cpp
Marinos.o:	Marinos.h Marinos.cpp
	g++ -c Marinos.cpp
Omnivoros.o:	Omnivoros.h Omnivoros.cpp
	g++ -c Omnivoros.cpp
Oviraptor.o:	Oviraptor.h Oviraptor.cpp
	g++ -c Oviraptor.cpp
Cuidadores.o:	Cuidadores.h Cuidadores.cpp
	g++ Cuidadores.cpp
clean:
	rm *.o main
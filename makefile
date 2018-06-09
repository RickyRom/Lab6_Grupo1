exe:	JoyaPequena.o Dinosaurios.o Carnivoros.o Herbivoros.o Triceratops.o Spinosaurus.o TyrannosaurusRex.o Aereos.o Marinos.o Omnivoros.o Oviraptor.o
	g++ JoyaPequena.o Dinosaurios.o Carnivoros.o Herbivoros.o Triceratops.o Spinosaurus.o TyrannosaurusRex.o Aereos.o Marinos.o Omnivoros.o Oviraptor.o -o exe
JoyaPequena.o:	JoyaPequena.cpp Dinosaurios.h Carnivoros.h Herbivoros.h Triceratops.h Spinosaurus.h TyrannosaurusRex.h Aereos.h Marinos.h Omnivoros.h Oviraptor.h
	g++ -c JoyaPequena.cpp
Carnivoros.o:	Carnivoros.h Carnivoros.cpp Dinosaurios.h
	g++ -c Carnivoros.cpp
Herbivoros.o:	Herbivoros.h Herbivoros.cpp Dinosaurios.h
	g++ -c Herbivoros.cpp
Triceratops.o:	Triceratops.h Triceratops.cpp Dinosaurios.h Herbivoros.h
	g++ -c Triceratops.cpp
Spinosaurus.o:	Spinosaurus.h Spinosaurus.cpp Dinosaurios.h Carnivoros.h
	g++ -c Spinosaurus.cpp
TyrannosaurusRex.o:	TyrannosaurusRex.h TyrannosaurusRex.cpp Dinosaurios.h Carnivoros.h
	g++ -c TyrannosaurusRex.cpp
Aereos.o:	Aereos.h Aereos.cpp Dinosaurios.h
	g++ -c Aereos.cpp
Marinos.o:	Marinos.h Marinos.cpp Dinosaurios.h
	g++ -c Marinos.cpp
Omnivoros.o:	Omnivoros.h Omnivoros.cpp Dinosaurios.h
	g++ -c Omnivoros.cpp
Oviraptor.o:	Oviraptor.h Oviraptor.cpp Dinosaurios.h Omnivoros.h
	g++ -c Oviraptor.cpp
Cuidadores.o:	Cuidadores.h Cuidadores.cpp
	g++ Cuidadores.cpp
Dinosaurios.o:	Dinosaurios.h Dinosaurios.cpp
	g++ -c Dinosaurios.cpp

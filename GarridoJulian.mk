adv_grafica.png : GarridoJulian_grafica.py Advection.dat
	python GarridoJulia_grafica.py

Advection.dat: Advection
	./Advection>Advection.dat
Advection: GarridoJulian_Advection.cpp
	c++ GarridoJulian_Advection.cpp -o Advection

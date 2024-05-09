#pragma once
#include <iostream>
using namespace std;
class lancha {
private:
	int velocidad = 0;
	int distanciaRecorrida = 0;
	int nitro = 0;
	string nombre = "";
public:
	int getDistanciaRecorrida();
	int setLancha(int pvelocidad, int distanciaRecorrida, int pnitro, string pnombre);
	int setNitro(int pnitro);
	int getNitro();
	int setDistanciaRecorrida(int pvelocidad);
	int setVelocidad(int pvelocidad);
	int setVelocidad2(int pvelocidad);
	int getVelocidad();
};